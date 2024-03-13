from setuptools import find_packages
from setuptools import setup

setup(
    name='robosense_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('robosense_msgs', 'robosense_msgs.*')),
)
