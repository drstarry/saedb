#ifndef SAE_ENGINE_HPP
#define SAE_ENGINE_HPP
#include "aggregator/iaggregator.hpp"

namespace saedb
{
    template <typename VertexProgramType>
    class IEngine
    {
    public:
	    typedef VertexProgramType                           vertex_program_type;
	    typedef typename vertex_program_type::graph_type    graph_type;
	    typedef typename vertex_program_type::message_type  message_type;
	    typedef typename graph_type::vertex_id_type         vertex_id_type;
	    typedef typename graph_type::vertex_type            vertex_type;
	    typedef typename graph_type::edge_type              edge_type;
	    typedef typename vertex_program_type::icontext_type icontext_type;
	    
        // start engine
	    virtual void start() {}
        
        // mark all vertices as active
        virtual void signalAll() {}
        
        // register an aggregator
        virtual void registerAggregator(const string& name,
                                        IAggregator* worker) {}
        
	    virtual ~IEngine() {}
    };
}
#endif