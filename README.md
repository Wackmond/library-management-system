# Library Management System

A C++ Library Management System that handles both regular books and audiobooks, featuring a user-friendly menu system and file-based data persistence.

## Features

- Manage both physical books and audiobooks
- User and admin interfaces
- File-based data persistence
- Book borrowing and returns
- Search functionality
- Availability tracking

## Project Structure

```
.
├── src/              # Source files
│   ├── book.h        # Base Book class
│   ├── audiobook.h   # AudioBook class (inherits from Book)
│   ├── library.h     # Library management class
│   └── main.cpp      # Main program entry
├── data/             # Data files
│   └── library_data.txt  # Sample library database
└── CMakeLists.txt    # CMake build configuration
```

## Building and Running

### Prerequisites
- C++ compiler with C++11 support
- CMake (3.10 or higher)

### Build Instructions

```powershell
# Create and enter build directory
mkdir build
cd build

# Generate build files and compile
cmake ..
cmake --build .

# Run the program
.\Debug\library_system.exe  # Windows
./library_system            # Linux/MacOS
```

## Usage

The system provides two interfaces:

1. User Menu
   - Search and borrow books
   - Return books
   - View available books and audiobooks

2. Admin Menu
   - Add new books and audiobooks
   - Manage book availability
   - Save/load library data

## Implementation Details

- Object-Oriented Design with inheritance (Book -> AudioBook)
- Dynamic memory management
- File I/O for data persistence
- Vector-based collection management

## License

This project is open source and available under the MIT License.
