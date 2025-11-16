from setuptools import find_packages, setup

package_name = 'fv_ur_nodes'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='fv',
    maintainer_email='fv@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'fv_recip_trajectory_node= fv_ur_nodes.fv_recip_trajectory_node:main',
            'fv_trajectory_node = fv_ur_nodes.fv_trajectory_node:main',
            'fv_force_node = fv_ur_nodes.fv_force_node:main',
        ],
    },

)
