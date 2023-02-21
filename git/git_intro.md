# Introduciton to git

The following is a brief introduction to the very basics of git.

**Learning Goals**
* What is git? Why use git?
* Essential git Commands
  * init
  * clone
  * etc...
* Basics of Collaboration
  * remotes
  * forking
  * etc...

### What is git? Why use git?**

git is a software which tracks the versions of files in some location called a repository.
Typically your project lives in a directory (we will use this term rather than folder from now on);
once you “install” git into that directory, we will now call it a git repository.

Software developers use git because it simplifies the process of collaborating on projects greatly.

The process of git typically flows like this:
1. You copy someone's repository
2. You make changes to the files in your version
3. You push your changes to the original repository

This typically involves something called branching, but that is a topic for later exploration.

## Basics of git

### git Commands and the Command Line in General

All command line programs follow the same format:
```bash
program_name [options] [arguments]
```

For example, one of the basic commands on linux is cd, or change directory.
You pass a directory and it moves you and your terminal into that location.

```bash
# changes directory to ~/home/code/projectA
cd ~/home/code/projectA
```

Sometimes commands take multiple arguments, like mv or move which takes two paths:

```bash
# moves file_A.cpp from projectA into projectB
mv ~/home/code/projectA/file_A.cpp ~/home/code/projectB
```

You must remember that all paths are relative to where your terminal is.
If your terminal is currently located at /Users/username (default on mac), you could not do the following:

```bash
# computer does not know where to find file_A.cpp or projectB/
mv file_A.cpp projectB
```

But you could move to projectA first and access file_A.cpp from there
```bash
cd ~/home/code/projectA
mv file_A.cpp ~/home/code/projectB
```

Similarly, all commands for git start with the keyword “git”, and are followed by different arguments which
are often commands themselves which take arguments.

For example:
```bash
# output current version of git on your computer
git -v
# or
git --version
```

or
```bash
# fetches the repository at the url
git fetch https://github.com/profazhar001/csc211H
```

### Creating a Repository (Repo)
The most straightforward way to create a repository is via git init from within your project directory.

```bash
# your current directory is now a repository
git init
```

### Adding Files and Saving Changes (add, commit)
While we have a repository, we still need to let it know that there are files we want to track.
We track our project’s files in snapshots called “commits”. Commits require a message
(which should describe the changes), and a list of changes that are part of the commit.
Adding files to be committed is called “staging” and is done with the add command.
We then use the commit command and the -m flag to specify our message.

```bash
# stage all changes in current directory
git add .

# saves first snapshot with the message, “initial commit”
git commit -m "initial commit"
```

Now if we make some changes to our files we would redo the process:


```bash
# first, stage changes
git add main.cpp classA.h

# then commit changes, with a descriptive message
git commit -m "changed variable name from X to Y"
```

You can also stage files in any order. They are stored in something referred to as the
*index*:

```bash
# make change to main.cpp
git add main.cpp
# make change to classA.h
git add classA.h
git commit -m "changed variable name from X to Y"
```

You can also see info about your repository and staging with `git status`.

## Collaborating with git!
As mentioned, git is most useful when working with others to develop your projects.
Sites like Github exist to store git repositories, which people can copy and use within
their own projects or make improvements to. Repositories that are on github are referred
to as “remotes”, because they are not on your computer.

The simplest way to access a remote is via “clone”.

```bash
# downloads a copy of the repository at the URL to your current directory
git clone https://github.com/profazhar001/csc211H
```

You can now do whatever you’d like with the code; you can use functions, write changes, add commits, etc…

If this repository belongs to you, you can then “push” your commits out to the remote via the push command,
which requires the remote and branch as arguments:

```bash
# Updates the remote repository with our local commits, IF AND ONLY IF we own the repository or have permission
git push https://github.com/profazhar001/csc211H origin/main
```

But what if you want to say, fix a bug in someone else’s repository and update their version?

Obviously, GitHub will not allow us to directly change anybody’s repository we want. Pushing to remotes is locked to 
people who don’t own the repo or have certain permissions.

### Forking
Forking a remote makes a copy of the remote, under your name. Now we can push our changes to our own remote. There is
no command specifically to fork a repo. The process is essentially first cloning a remote, and then deleting the link
to the old remote, and finally making your own remote, but this is much simpler to just do online via Github.

Now after forking we can clone our own repository:
```bash
git clone https://github.com/p5quared/csc211H
# ...commit changes... 
# And push our commits to our own remote, so anyone can see our fixes!
git push …/p5quared/csc211H
```

### Pull Requests and Updating (fetch)
*But wait, my updates are on my own remote but I want them to be on the main repo that someone else owns!*

Adding changes to others’ repositories is done via the “Pull Request”.
From your fork on GitHub, if you have commits that are not on the main repo, you will see
a message that says something like “Your fork is X commits ahead of originalRepo”, and a
button to submit a pull request. Submitting a pull request means that the owner of
originalRepo will be shown your commits, and offered to add your changes to the main
remote. They will review your changes and either approve or deny your PR. If your PR is
approved, and it becomes part of the official repository, anyone using a clone (not fork)
of that repository will have your changes.

```bash
# Update your local repository to changes elsewhere
git fetch origin/main
```

This is a very brief, broad overview on some basic git commands.
For more details, I highly encourage you to use [git-scm](https://git-scm.com/) as a resource to check your
understanding and learn more as you progress.