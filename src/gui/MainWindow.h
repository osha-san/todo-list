#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QPushButton>
#include <QComboBox>
#include <QLineEdit>
#include "../database/DatabaseManager.h"


class MainWindow : public QMainWindow {
    Q_OBJECT

    private:
        QTableWidget* taskTable;
        QPushButton* addButton;
        QPushButton* editButton;
        QPushButton* deleteButton;
        QComboBox* filterComboBox;
        QLineEdit* searchBox;

        DatabaseManager dbManager;

        void setupUI();
        void loadTasks();
        void createMenuBar();

    private slots:
        void onAddTask();
        void onEditTask();
        void onDeleteTask();
        void onFilterChanged(int index);
        void onSearchTextChanged(const QString& text);
        void onTaskDoubleClicked(int row, int column);
    
    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
};

#endif