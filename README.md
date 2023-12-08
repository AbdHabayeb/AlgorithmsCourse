# Algorithms Course

# GitHub

- After I linked the site with git bash, I verified that the linking process was successful,

  As shown in the following image :
  
![1](https://github.com/AbdHabayeb/AlgorithmsCourse/assets/153276832/6424d505-97b0-41c7-8428-528db50cbc98)


- After that, I added the following code to initialize a new empty Git repository.

```jsx
$ git init
```

- After that, I added the file by writing until I reached the Staging Area , Using the following code

```jsx
$ git add .
```

I used dot to add everything in the folder , Then verify the success of the operation as shown in the following image.

![2](https://github.com/AbdHabayeb/AlgorithmsCourse/assets/153276832/b7d7097f-4ec3-47b3-8ca8-b3f941deaffc)


- After that, go to the commit step in order to move to the Local Repository step

![3](https://github.com/AbdHabayeb/AlgorithmsCourse/assets/153276832/1a2c61cf-fce3-4fa3-875d-9bcf79045258)


Where the quantity takes the interim snapshot and commits it to the project record.

- Before moving from one solution stage to the next, we must create a simple code for ease of use in the future, which is

```jsx
$ git remote add origin https://github.com/AbdHabayeb/AlgorithmsCourse.git
```

I encountered some problems here as shown in the following image
![4](https://github.com/AbdHabayeb/AlgorithmsCourse/assets/153276832/5f1c9a46-439a-40a7-af88-214a9989e8fd)


- I used the following code to solve the problems and the following code to verify

```jsx
$ git remote set-url origin https://github.com/AbdHabayeb/AlgorithmsCourse.git
```

```jsx
$ git remote -v
```

- After that, the last step is to move from local repository to remote repositories using the code shown in the picture.
![5](https://github.com/AbdHabayeb/AlgorithmsCourse/assets/153276832/5523771e-09f4-4107-a546-d20fabaa3cf9)


# After that we reload the site and see the results
