

## Data, Information and Knowledge
Data, Information and Knowledge is three different stages of handling facts. Raw data is processed to produce a meaningful information. This information, is interpreted to obtain knowledge for decision-making.

### Data
Data is defined as raw facts, text, information, numbers, images and symbols, etc. that have not yet been processed.

#### Example:
- 106
- Rahul
- 82

### Information
The processed and organised data that is meaningful and useful is called information.

#### Example:
Student Name Rahul whose roll no. 101 scored 82 marks.

### Knowledge
Knowledge is the interpretation of information that can be used for decision-making.

#### Example:
Those students who got marks less than 82 need to have work hard.


## Database
Database is the organised collection of logically related data stored electronically so that data can be easily accessed, managed and updated.

### Characteristics
1. Data Organization <br>
Data is stored in a systematic and structured manner, making it easy to access and manage.
2. Data Sharing <br>
Multiple users and application can access and use same database simultaneously.
3. Data Security <br>
Databases provide mechanisms to protect data from unauthorised access, modification and deletion.
4. Data Integrity <br>
Databases maintains the accuracy, consistency, and reliability of stored data.
5. Data Redundancy Control <br>
Unnecessary duplication of data is minimized, reducing storage requirements and inconsistencies.
6. Concurrent Access <br>
Multiple users can perform operations on the database at the same time while maintaining data consistency.
7. Backup and Recovery <br>
Databases provides facilities to create backups and recover data in case of system failure or data loss.
8. Easy Data Retrieval <br>
Users can quickly search, filter, update and retrieve information using database queries.

#### Example:
A university database may contain:
- Student information
- Faculty information
- Departments
- Courses
- Examination results
- Fee information

## Database Management System (DBMS)
A database management system is a software system that enable users to create, store, organised, manage, retrieve and update data in a database. It acts as a interface between the user/application and the database.

#### Example: MySQL, Oracle, PostgreSQL, MongoDB, Microsoft SQL Server, etc.

### Responsibilities of DBMS
The Database Management System (DBMS) performs several important responsibilities to ensure that data is stored, accessed, and managed efficiently and securely.

1. Data Integrity <br>
DBMS maintains the accuracy, consistency, and reliability of stored data.
2. Data Sharing <br>
Multiple users and application can access and use same database simultaneously.
3. Data Security and Authorization <br>
DBMS provides mechanisms to protect data from unauthorised access, modification and deletion by providing authentication, user roles, and access permissions.
4. Concurrency Control <br>
Multiple users can perform operations on the database at the same time while maintaining data consistency.
5. Metadata Management <br>
DBMS maintains information about the database, such as table names, column names, data types, relationships, and constraints. This information is called metadata.
6. Transaction Management <br>
DBMS manages transactions and ensures that database operations are completed reliably according to ACID properties.
7. Backup and Recovery <br>
It provides mechanisms to back up data and restore the database after failures, crashes, or accidental data loss.
8. Data Definition <br>
It allows users to define the structure of the database, including tables, fields, data types, relationships, and constraints.
9. Data Manipulation
DBMS provides operations to insert, update, delete, and retrieve data from the database.
10. Data Independence <br>
DBMS separates the logical structure of data from its physical storage, allowing changes in storage without requiring major changes to application programs.

#### Conclusion
Thus, the main responsibility of a DBMS is to provide an efficient, secure, reliable, and controlled environment for storing, retrieving, and managing data.

## DBMS Architecture
DBMS Architecture describes how users, applications, the DBMS, and the database interact with each other.

The most commonly studied architecture is the Three-Schema Architecture, also called the Three-Level Architecture.

### Three-Level DBMS Architecture
![alt text](<ChatGPT Image Oct 2, 2026, 01_16_31 PM.png>)

### 1. External Level (View Level)
- It is the highest level of DBMS architecture.
- It describes how individual users view the database.
- Different users can have different views of the same database.
- It hides unnecessary information from users.
- It improves security and simplicity.

### 2. Conceptual Level (Logical Level)
- It is the middle level of the architecture.
- It defines tables, Attributes, Relationships, Constraints and Data types.
- It hides the physical storage details from users.

#### Example:
STUDENT(Student_ID, Name, Course_ID)

### Internal Level (Physical Level)
- It is the lowest level of the architecture.
- It describes how data is physically stored.
- It deals with Files, Storage blocks, Indexes, Record placement and Data structures.
- It hides physical storage details from the users.

### Difference
| Basis               | **External Level**               | **Conceptual Level**                          | **Internal Level**                                 |
| ------------------- | -------------------------------- | --------------------------------------------- | -------------------------------------------------- |
| **Also called**     | View Level                       | Logical Level                                 | Physical Level                                     |
| **Position**        | Highest level                    | Middle level                                  | Lowest level                                       |
| **Main purpose**    | Shows data to individual users   | Defines the overall logical structure         | Defines how data is physically stored              |
| **Deals with**      | User-specific views              | Tables, relationships, constraints, entities  | Files, blocks, indexes, storage locations          |
| **Data visibility** | Shows only required data         | Shows the complete logical database           | Deals with complete physical storage               |
| **Concerned with**  | **What a particular user sees**  | **What data exists and how it is related**    | **How data is stored**                             |
| **Users**           | End users, application users     | Database designers, administrators            | Database administrators/system engineers           |
| **Number of views** | Can have **multiple views**      | Usually **one conceptual schema**             | Usually **one internal schema**                    |
| **Hides**           | Unnecessary database information | Physical storage details                      | Nothing below it; it represents storage details    |
| **Example**         | Student sees only Name and Marks | `STUDENT(Student_ID, Name, Marks, Course_ID)` | Student records stored in disk blocks with indexes |
| **Main benefit**    | Security and simplicity          | Logical organization                          | Efficient storage and access                       |


## Components of a Database System