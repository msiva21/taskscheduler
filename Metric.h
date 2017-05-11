//
// Created by Anaid Gakhokidze on 2017-05-09.
//

#ifndef TASKSCHEDULER_METRIC_H
#define TASKSCHEDULER_METRIC_H

#include <list>
#include <string>

class Metric {
private:
    std::string  m_taskName;
    std::list<double>  m_rawMetrics;
public:
    Metric() {}

    Metric(std::string taskName, std::list<double> rawMetrics)
            : m_taskName(taskName)
            , m_rawMetrics(rawMetrics)
    {
    }

    Metric(Metric *obj)
    {
        m_taskName = obj->getTaskName();
        m_rawMetrics = obj->getRawMetrics();
    }

    void setTaskName(std::string taskName) { m_taskName = taskName; }
    std::string getTaskName()const { return m_taskName; }

    void setRawMetrics(std::list<double> rawMetrics) { m_rawMetrics = rawMetrics; }
    std::list<double, std::allocator<double>> getRawMetrics()const { return m_rawMetrics; }
};


#endif //TASKSCHEDULER_METRIC_H
