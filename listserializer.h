#ifndef LISTSERIALIZER_H
#define LISTSERIALIZER_H
#include <QListWidget>
#include <QListWidgetItem>

using namespace std;


template <typename T> class ListSerializer
{
public:

    void update_qlist_widget(QListWidget* listWidget) {
        listWidget->clear();

        for (auto model : models) {
            listWidget->addItem(model.toQString());
        }
    }

    void push_back(T model) {
        models.push_back(model);
    }

    void insert(T model) {
        for (int i = 0; i < models.size(); ++i) {
            if (models[i].toQString() == model.toQString())
                models[i] = model;
        }
    }

    vector<T> get_models() { return models; }

protected:

    vector<T> models;
};

#endif // LISTSERIALIZER_H
