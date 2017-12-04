from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for cocabit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@cocabitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
