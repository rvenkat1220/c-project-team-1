# test-c-project-team1

C project for testing purposes

### Opt 1. Build and run program_team_1 using gcc
```
gcc src/program_team_1.c -o program_team_1
./program_team_1
```

### Opt 2. Build and run program_team_1 using cmake
```
cmake -DCMAKE_INSTALL_PREFIX=./cmake-build/binaries -H. -Bcmake-build
cd cmake-build/
make install
./binaries/bin/program_team_1
```