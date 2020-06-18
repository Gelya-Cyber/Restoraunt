/*********************************************************************
	Rhapsody	: 9.0 
	Login		: gelya
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CancelReservation_Form
//!	Generated Date	: Thu, 18, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\CancelReservation_Form.h
*********************************************************************/

#ifndef CancelReservation_Form_H
#define CancelReservation_Form_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsDatabase
class Database;

//## link itsTable_Form
class Table_Form;

//## package Default

//## class CancelReservation_Form
class CancelReservation_Form {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CancelReservation_Form();
    
    //## auto_generated
    ~CancelReservation_Form();
    
    ////    Operations    ////
    
    //## operation Cancel()
    void Cancel();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getNumberTable() const;
    
    //## auto_generated
    void setNumberTable(int p_NumberTable);
    
    //## auto_generated
    Database* getItsDatabase() const;
    
    //## auto_generated
    void setItsDatabase(Database* p_Database);
    
    //## auto_generated
    Table_Form* getItsTable_Form() const;
    
    //## auto_generated
    void setItsTable_Form(Table_Form* p_Table_Form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int NumberTable;		//## attribute NumberTable
    
    ////    Relations and components    ////
    
    Database* itsDatabase;		//## link itsDatabase
    
    Table_Form* itsTable_Form;		//## link itsTable_Form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDatabase(Database* p_Database);
    
    //## auto_generated
    void _setItsDatabase(Database* p_Database);
    
    //## auto_generated
    void _clearItsDatabase();
    
    //## auto_generated
    void __setItsTable_Form(Table_Form* p_Table_Form);
    
    //## auto_generated
    void _setItsTable_Form(Table_Form* p_Table_Form);
    
    //## auto_generated
    void _clearItsTable_Form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CancelReservation_Form.h
*********************************************************************/
