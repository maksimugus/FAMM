#!/bin/bash

TEST_DIR="./tests"
COMPILER="./cmake-build-debug/bin/FAMMCompiler"

total_tests=0
passed_tests=0

echo "running tests:"

for test_file in "$TEST_DIR"/*.famm; do
  ((total_tests++))
  test_name=$(basename "$test_file")

  output=$($COMPILER --file "$test_file")

  if [[ "$output" == *"1"* ]]; then
    echo "$test_name [+]"
    ((passed_tests++))
  else
    echo "$test_name [-]"
  fi
done

echo "total passed: $passed_tests/$total_tests"
