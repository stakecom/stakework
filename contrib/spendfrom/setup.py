from distutils.core import setup
setup(name='XSWspendfrom',
      version='1.0',
      description='Command-line utility for stakework "coin control"',
      author='Gavin Andresen',
      author_email='gavin@stakeworkfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
