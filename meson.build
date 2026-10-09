project('shittyphysicssim', 'c')

inc = include_directories('.')
sdl_dep = dependency('sdl3')

# Main executable
executable(
  'shittyphysicssim',
  sources: [
    'main.c',
    'entity.c',
    'util.c',
  ],
  include_directories: inc,
  win_subsystem: 'windows',
  dependencies: [sdl_dep],
)

# Test executables
test_vector_exe = executable(
  'test_vector',
  sources: [
    'tests/test_vector.c',
    'util.c',
  ],
  include_directories: inc,
)

test('test_vector', test_vector_exe)