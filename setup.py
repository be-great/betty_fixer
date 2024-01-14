from setuptools import setup, find_packages
from setuptools.command.install import install
from pathlib import Path
import subprocess
import shutil

class CustomInstallCommand(install):
    def run(self):
        install.run(self)
        # Check if Betty is installed
        betty_executable = shutil.which('betty')
        if betty_executable is None:
            print("Betty not found. Installing...")
            self.install_betty()

    def install_betty(self):
        # Get the directory where this setup.py is located
        current_directory = Path(__file__).resolve().parent

        # Add the commands to install Betty
        betty_install_script = current_directory / 'bettyfixer' / 'install_dependency' / '.Betty' / 'install.sh'
        betty_dest = Path('/usr/local/bin/betty')  # Adjust the destination if needed

        subprocess.run(['bash', str(betty_install_script)])
        shutil.copy(str(current_directory / 'bettyfixer' / 'install_dependency' / '.betty'), str(betty_dest))
        betty_dest.chmod(0o755)  # Make sure the copied file is executable

setup(
    name='bettyfixer',
    version='1.3',
    packages=find_packages(),
    cmdclass={'install': CustomInstallCommand},  # Use the custom install command
    entry_points={
        'console_scripts': [
            'bettyfixer = bettyfixer.betty_fixer:main',
        ],
    },
    install_requires=[
        'colorama',
        # other dependencies...
    ],
    author='Moealsir',
    author_email='mohamedwdalsir@gmail.com',
    description='A description of your package',
    url='https://github.com/Mowalsir/betty_fixer',  # Replace with your GitHub repository URL
    license='MIT',  # Replace with your desired license
)
