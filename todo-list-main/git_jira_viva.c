/* 1. What is GitHub?
Answer:
GitHub is an online platform that hosts Git repositories. It allows developers to store, manage, collaborate, and share code. It also provides features like issues, pull requests, forking, actions, and more.

2. What is the difference between Git and GitHub?
Git	GitHub
Version control tool	Platform to host Git repositories
Works locally	Cloud-based
Tracks code changes	Supports collaboration
CLI-based	Web interface + CLI

3. What is a repository?
Answer:
A repository (or repo) is like a project folder that stores all code files and the complete history of changes. It can be local (on your system) or remote (on GitHub).

4. How do you create a repository on GitHub?
Answer:

Log in to GitHub

Click + > New repository

Give repo name & description

Choose public/private

Click Create repository

5. What is cloning in GitHub?
Answer:
Cloning means downloading a GitHub repo to your local system using:

bash
Copy
Edit
git clone <repo-url>
6. What is forking in GitHub?
Answer:
Forking means copying someone else’s repo to your GitHub account. It allows you to make changes without affecting the original repo.

7. What is a pull request (PR)?
Answer:
A PR is a request to merge your changes into the main project. Used for collaboration and code review.

8. What is branching?
Answer:
Branching lets you work on different versions of the code separately. The default branch is usually main or master.

9. What is merging?
Answer:
Merging means combining two branches. Usually done when changes in a feature branch are added to main.

10. What is README.md?
Answer:
It’s a markdown file that describes the project details, like features, setup, and usage. Shown on the front page of your repo.

11. What is .gitignore?
Answer:
This file tells Git to ignore certain files/folders, like system files, temporary files, or sensitive config.

12. What is GitHub Actions?
Answer:
GitHub Actions lets you automate workflows, such as testing code or deploying a site when you push code.

13. What are GitHub Issues?
Answer:
Used to track bugs, enhancements, or tasks. Team members can discuss and assign them.

14. What is the use of git push origin main?
Answer:
This command uploads your committed changes to the remote GitHub repo, specifically to the main branch.

15. What are some collaboration features on GitHub?
✅ Pull Requests
✅ Code Review
✅ Issues
✅ Projects (Kanban boards)
✅ Wiki
✅ Contributors
✅ Actions

📋 GitHub Practical Flow (for viva)
Create repo on GitHub

Clone it using git clone

Add file → git add .

Save changes → git commit -m "msg"

Push to GitHub → git push origin main

Create branch → git checkout -b feature1

Push branch → git push origin feature1

Open pull request on GitHub

Reviewer merges it

Use issues to track bugs

📌 GitHub Key Terms
Term	Meaning
Fork	Copy of repo to your GitHub
Clone	Copy repo to your computer
Pull Request	Propose changes
Branch	Version of code
Merge	Combine branches
Commit	Save changes
Push	Upload to GitHub
Pull	Download from GitHub
Issues	Track bugs/tasks
Actions	Automate tasks

🧠 GitHub Viva Rapid Fire:
What is the default branch in GitHub? → main

Can you create private repos in GitHub? → Yes

How to contribute to open source? → Fork → Clone → PR

What is markdown? → Light markup language used in README.md

Can you add collaborators to your repo? → Yes

📘✨ JIRA Viva Questions + Answers
1. What is Jira?
Answer:
Jira is a project management and issue tracking tool, used by teams to plan, track, and manage software development.

2. What is an issue in Jira?
Answer:
An issue is any task, bug, or work item in a project. It’s the basic unit in Jira.

3. What is a story?
Answer:
A story is a requirement or user feature in Jira.
Example: As a user, I want to sign in with Google.

4. What is an epic?
Answer:
An epic is a large body of work that can be split into smaller stories or tasks.

5. What is a sprint?
Answer:
A sprint is a time-boxed period (usually 1–2 weeks) during which certain issues are completed.

6. What is a backlog?
Answer:
The backlog is a list of all upcoming tasks that need to be completed in future sprints.

7. What is a Jira board?
Answer:
A visual board (like Kanban) showing task status like:

To Do

In Progress

Done

8. What is a sub-task?
Answer:
A smaller task under a main story or issue. Helps break down work.

9. What is an assignee in Jira?
Answer:
The person responsible for working on a particular task or issue.

10. What is a label in Jira?
Answer:
A tag or keyword used to group and search for issues easily.

11. What is a workflow in Jira?
Answer:
A workflow defines the steps and states an issue goes through — e.g., To Do → In Progress → Review → Done.

12. What is the difference between Epic and Story?
Epic	Story
Large module	Smaller user feature
Takes weeks	Takes 1–2 days
Divided into stories	May have sub-tasks

💡 How to Use Jira – Step by Step
✅ 1. Create a Project
Choose Software project

Select a template (Kanban/Scrum)

✅ 2. Create Issues
Click Create

Choose issue type (Story, Bug, Epic, Task)

Give title, description, assign to team member

✅ 3. Add Issues to Backlog
All created issues go into Backlog by default

✅ 4. Plan Sprint
Select some issues from Backlog

Click Start Sprint

Define duration (1–2 weeks)

✅ 5. Track Progress on Board
Drag issues from To Do → In Progress → Done

✅ 6. Close Sprint
After sprint ends, incomplete issues go back to Backlog

📌 Jira Important Terms
Term	Description
Epic	Large feature
Story	User task
Task	Work item
Bug	Error/issue
Sub-task	Part of a task
Sprint	Time-boxed period
Backlog	Pending tasks
Board	Drag-and-drop view
Workflow	Lifecycle of an issue
Assignee	Person working on issue
Status	To Do / In Progress / Done*/