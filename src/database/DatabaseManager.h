#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <mysql.h>
#include <string>
#include <vector>
#include <memory>
#include "../models/Task.h"
#include "../models/Category.h"

class DatabaseManager {
private:
    MYSQL* connection;
    std::string host;
    std::string user;
    std::string password;
    std::string database;
    int port;

    bool loadConfig(const std::string& configFile);

public:
    DatabaseManager();
    ~DatabaseManager();

    bool connect();
    void disconnect();
    bool isConnected() const;

    // Task operations
    bool addTask(const Task& task);
    bool updateTask(const Task& task);
    bool deleteTask(int taskId);
    std::vector<Task> getAllTasks();
    std::vector<Task> getTasksByStatus(const std::string& status);
    Task getTaskById(int id);

    // Category operations
    bool addCategory(const Category& category);
    std::vector<Category> getAllCategories();
    bool assignCategoryToTask(int taskId, int categoryId);
};

#endif