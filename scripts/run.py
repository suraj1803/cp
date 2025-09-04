import subprocess
import sys

if len(sys.argv) < 2:
    print("Usage: python3 run_cpp.py <file.cpp>")
    sys.exit(1)

cpp_file = sys.argv[1]
exe_file = "a.out"

# Step 1: Compile the C++ file
print(f"Compiling {cpp_file}...")
compile_process = subprocess.run(["g++", cpp_file, "-o", exe_file])

# Step 2: Check compilation result
if compile_process.returncode != 0:
    print("❌ Compilation failed!")
    sys.exit(1)

print("✅ Compilation successful!")

# Step 3: Ask for input after compilation
print("\nEnter input for the C++ program (press Ctrl+D or Ctrl+Z then Enter when done):")

try:
    program_input = sys.stdin.read()
except KeyboardInterrupt:
    print("\nInput cancelled.")
    sys.exit(1)

# Step 4: Run the executable with the provided input
run_process = subprocess.run(
    [f"./{exe_file}"],
    input=program_input.encode(),
    capture_output=True
)

# Step 5: Print the output from the C++ program
print("\n--- Program Output ---\n")
print(run_process.stdout.decode())
