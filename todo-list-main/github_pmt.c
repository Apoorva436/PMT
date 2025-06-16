/*
🧠 Basic Concepts to Understand
Concept	Meaning
Git	Local version control system
GitHub	Online hosting platform for Git repositories
Repo	A project directory (code + version history)
Commit	Save changes to history
Push	Upload commits to GitHub
Pull	Get latest changes from GitHub
Branch	A separate version of code
Merge	Combine code from different branches
Fork	Copy someone's repo to your account
Pull Request	Propose your changes to be merged
Clone	Copy GitHub repo to your PC

✅ All Important Git Commands (with meanings)
🔹 Git Setup (once)
bash
Copy
Edit
git config --global user.name "Your Name"
git config --global user.email "youremail@example.com"
🔹 Create New Repo Locally
bash
Copy
Edit
git init
🔹 Clone Repo from GitHub
bash
Copy
Edit
git clone https://github.com/username/repo-name.git
🔹 Check Repo Status
bash
Copy
Edit
git status
🔹 Add Files to Staging
bash
Copy
Edit
git add filename      # add specific file
git add .             # add all changes
🔹 Commit Changes
bash
Copy
Edit
git commit -m "your message"
🔹 Push Changes to GitHub
bash
Copy
Edit
git push origin main
🔹 Pull Latest Changes from GitHub
bash
Copy
Edit
git pull origin main
🔹 View Branches
bash
Copy
Edit
git branch
🔹 Create & Switch to a New Branch
bash
Copy
Edit
git checkout -b branch-name
🔹 Switch to Another Branch
bash
Copy
Edit
git checkout main
🔹 Merge Branch into Main
bash
Copy
Edit
git merge branch-name
🔹 See Remote URL
bash
Copy
Edit
git remote -v
🔹 Fork (done from GitHub UI)
Go to repo → Click Fork → Choose your account

Then clone your forked repo locally.

🔹 Open Pull Request (from GitHub UI)
Go to your branch → Click Compare & Pull Request → Submit

git init                          # Start a repo
git clone <url>                  # Copy GitHub repo
git status                        # See current state
git add filename                 # Stage a file
git commit -m "msg"             # Save changes
git push origin main            # Upload to GitHub
git pull origin main            # Download latest
git checkout -b branch-name     # New branch
git merge branch-name           # Merge changes
git remote -v                   # View remote URLs
git branch -d branch-name       # Delete branch

*/