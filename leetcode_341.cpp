class NestedIterator:
    def __init__(self, nestedList):
        self.flattened_list = []  # A list to store the flattened integers.
        self.index = 0  # An index to keep track of the current position in the flattened_list.
        self.flatten(nestedList)  # Call the flatten function to flatten the input nestedList.

    # Recursively flatten a nested list and add integers to the flattened_list.
    def flatten(self, nested_list):
        for nested_int in nested_list:
            if nested_int.isInteger():
                self.flattened_list.append(nested_int.getInteger())  # If it's an integer, add it to the list.
            else:
                self.flatten(nested_int.getList())  # If it's a nested list, recursively flatten it.

    def next(self):
        value = self.flattened_list[self.index]  # Get the next integer.
        self.index += 1  # Increment the index.
        return value

    def hasNext(self):
        return self.index < len(self.flattened_list)  # Check if there are more elements to iterate.