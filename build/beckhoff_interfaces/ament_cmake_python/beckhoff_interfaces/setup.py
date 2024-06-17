from setuptools import find_packages
from setuptools import setup

setup(
    name='beckhoff_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('beckhoff_interfaces', 'beckhoff_interfaces.*')),
)
