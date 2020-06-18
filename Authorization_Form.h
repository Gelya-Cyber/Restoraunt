/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Authorization_Form
//!	Generated Date	: Thu, 18, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Authorization_Form.h
*********************************************************************/

#ifndef Authorization_Form_H
#define Authorization_Form_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsMain_Form
class Main_Form;

//## package Default

//## class Authorization_Form
class Authorization_Form {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Authorization_Form();
    
    //## auto_generated
    ~Authorization_Form();
    
    ////    Operations    ////
    
    //## operation Authorization()
    void Authorization();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getLogin() const;
    
    //## auto_generated
    void setLogin(int p_Login);
    
    //## auto_generated
    int getPassword() const;
    
    //## auto_generated
    void setPassword(int p_Password);
    
    //## auto_generated
    Main_Form* getItsMain_Form() const;
    
    //## auto_generated
    void setItsMain_Form(Main_Form* p_Main_Form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Login;		//## attribute Login
    
    int Password;		//## attribute Password
    
    ////    Relations and components    ////
    
    Main_Form* itsMain_Form;		//## link itsMain_Form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMain_Form(Main_Form* p_Main_Form);
    
    //## auto_generated
    void _setItsMain_Form(Main_Form* p_Main_Form);
    
    //## auto_generated
    void _clearItsMain_Form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Authorization_Form.h
*********************************************************************/
