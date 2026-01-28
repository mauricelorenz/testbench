#!/usr/bin/env python3

def main() -> None:
    """Run the main program."""
    try:
        int("hello")
    except ValueError as e:
        print(f"Error: {e}\n{type(e)}")


if __name__ == "__main__":
    main()
