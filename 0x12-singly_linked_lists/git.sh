#!/bin/bash

# Add all changes to the staging area
git add .

# Commit the changes with a provided commit message
commit_message="Your commit message goes here"
git commit -m "$commit_message"

# Push the changes to the remote repository
git push

# Print a success message
echo "Changes have been added, committed, and pushed to the remote repository."

