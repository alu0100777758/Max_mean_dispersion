#ifndef SYMMETRICGRAPH_LOADER_H
#define SYMMETRICGRAPH_LOADER_H

#include <fstream>
#include "Symmetric_connected_graph.h"
class SymmetricGraph_Loader
{
    public:
        /** Default constructor */
        SymmetricGraph_Loader();
        SymmetricGraph_Loader(const char path[],const char name[]);
        /** Default destructor */
        virtual ~SymmetricGraph_Loader();
        /** Access _path
         * \return The current value of _path
         */
        std::string Get_path() { return _path; }
        /** Set _path
         * \param val New value to set
         */
        void Set_path(std::string val) { _path = val; }
        /** Access _name
         * \return The current value of _name
         */
        std::string Get_name() { return _name; }
        /** Set _name
         * \param val New value to set
         */
        void Set_name(std::string val) { _name = val; }

        std::string getNextLine();

        static bool load(std::string pathAndName, Symmetric_connected_graph graph);
    protected:
    private:
        std::string _path; //!< Member variable "_path"
        std::string _name; //!< Member variable "_name"
        std::ifstream _file;
};

#endif // SYMMETRICGRAPH_LOADER_H
