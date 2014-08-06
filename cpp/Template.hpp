//!
//! @file				Template.hpp
//! @author				Geoffrey Hunter <gbmhunter@gmail.com> (www.cladlab.com)
//! @created			2014-07-23
//! @last-modified	2014-08-06
//! @brief 				Template file for C++ code.
//! @details
//!						See README.rst in repo root dir for more info.

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

//===============================================================================================//
//======================================== HEADER GUARD =========================================//
//===============================================================================================//

#ifndef TEMPLATE_H
#define TEMPLATE_H

//===============================================================================================//
//==================================== FORWARD DECLARATION ======================================//
//===============================================================================================//

namespace TemplateNs
{
	class TemplateClass;
}

//===============================================================================================//
//========================================== INCLUDES ===========================================//
//===============================================================================================//

// System headers
//#include <cstdint>		// int8_t, int32_t e.t.c

// User libraries
// none

// User headers
// none

//===============================================================================================//
//======================================== NAMESPACE ============================================//
//===============================================================================================//

namespace TemplateNs
{
	
	//! @brief		Brief description of class.
	//! @details	Detailed description of class.
	//! @note		Not pre-scheduler safe.
	class TemplateClass
	{	
		
		public:
									
			//======================================================================================//
			//==================================== PUBLIC METHODS ==================================//
			//======================================================================================//
					
			//! @brief		Brief description of method.
			//! @details	Detailed description of method.
			//! @param		myVar		Variable description.
			//! @returns	True if successful, otherwise false.
			//! @note		Not pre-scheduler safe. Thread-safe. Re-entrant. Not ISR safe.
			bool MyMethod(uint32_t myVar);
						
			//======================================================================================//
			//================================= PUBLIC VARIABLES ===================================//
			//======================================================================================//
				
			// none
				
		private:
						
			//======================================================================================//
			//=================================== PRIVATE METHODS ==================================//
			//======================================================================================//
			
			// none
			
			//======================================================================================//
			//================================== PRIVATE VARIABLES =================================//
			//======================================================================================//

			// none
			
		protected:

			//======================================================================================//
			//=================================== PROTECTED METHODS ================================//
			//======================================================================================//
			
			// none
			
			//======================================================================================//
			//================================== PROTECTED VARIABLES ===============================//
			//======================================================================================//

			// none
		
	}; // class TemplateClass


} // namespace TemplateNs

#endif	// #ifndef TEMPLATE_H

// EOF
