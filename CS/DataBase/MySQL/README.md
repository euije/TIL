# MySQL

<img width="128px" src="https://labs.mysql.com/common/logos/mysql-logo.svg?v2"/>

<br/>  

> MySQL is the world's most popular open source database.

> Whether you are a fast growing web property, technology ISV or large enterprise, MySQL can cost-effectively help you deliver high performance, scalable database applications.

---

# ❤️ Introduction

## ✨ Installation

> OS : macOS Montery (12.6, Intel)

- Requirements
  - [Homebrew](https://brew.sh/index_ko)
    - (or npm)
<br/>

- Steps
  - 1️⃣ **Install MySQL**

  ``` bash
  $ brew install mysql
  or
  $ npm install mysql
  ```

  - 2️⃣ **Check installation version**

  ``` bash
  $ mysql -V
  ```

  - 3️⃣ **Set up initial configurations**

  ``` bash
  $ mysql_secure_installation
  ```
  -
    1. Would you like to setup VALIDATE PASSWORD component? : Y/N
    2. Select validation policy (0 = LOW, 1 = MEDIUM and 2 = STRONG) : 0/1/2, Y/N
    3. Remove anonymous users? : Y/N
    4. Disallow root login remotely? : Y/N
    5. Remove test database and access to it? : Y/N
    6. Reload privilege tables now? : Y/N
    <br/>

  - 4️⃣ **Run MySQL server**

  ``` bash
  $ mysql.server start
  or
  $ brew services start mysql
  ```

  - 5️⃣ **Connect to MySQL DBMS**

  ``` bash
  $ mysql -u root -p
  ```

## ✨ DBMS

- Database 