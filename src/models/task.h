#ifndef TASK_H
#define TASK_H

#include <string>
#include <ctime>

class Task {

    private:
        int id;
        std::string title;
        std::string description;
        std::string priority;
        std::string status;
        std::string dueDate;
        std::string createdAt;
    
public:
    Task();
    Task(const std::string& title, const std::string& description);

    //Getters

    int getId() const {
        return id;
    }

    std::string getTitle() const{
        return title;
    }

    std::string getDescription() const{
        return description;
    }
    std::string getPriority() const{
        return priority;
    }
    std::string getStatus() const {
        return status;
    }
    std::string getDueDate() const {
        return dueDate;
    }
    

    //Setters
    void setId(int id) {
        this->id = id;
    }
    void setTitle(const std::string& title) {
        this->title = title;
    }

    void setDescription(const std::string&desc) {
        this->description = desc;
    }

    void setPriority(const std::string& priority) {
        this->priority = priority;
    }
    void setStatus(const std::string& status) {
        this->status = status;
    }
    void setDueDate(const std::string& date) {
        this->dueDate = date;
    }
};

#endif