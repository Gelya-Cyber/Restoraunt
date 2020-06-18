/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CancelReservation_Form
//!	Generated Date	: Thu, 18, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\CancelReservation_Form.cpp
*********************************************************************/

//## auto_generated
#include "CancelReservation_Form.h"
//## link itsDatabase
#include "Database.h"
//## link itsTable_Form
#include "Table_Form.h"
//## package Default

//## class CancelReservation_Form
CancelReservation_Form::CancelReservation_Form() {
    itsDatabase = NULL;
    itsTable_Form = NULL;
}

CancelReservation_Form::~CancelReservation_Form() {
    cleanUpRelations();
}

void CancelReservation_Form::Cancel() {
    //#[ operation Cancel()
    //#]
}

int CancelReservation_Form::getNumberTable() const {
    return NumberTable;
}

void CancelReservation_Form::setNumberTable(int p_NumberTable) {
    NumberTable = p_NumberTable;
}

Database* CancelReservation_Form::getItsDatabase() const {
    return itsDatabase;
}

void CancelReservation_Form::setItsDatabase(Database* p_Database) {
    if(p_Database != NULL)
        {
            p_Database->_setItsCancelReservation_Form(this);
        }
    _setItsDatabase(p_Database);
}

Table_Form* CancelReservation_Form::getItsTable_Form() const {
    return itsTable_Form;
}

void CancelReservation_Form::setItsTable_Form(Table_Form* p_Table_Form) {
    if(p_Table_Form != NULL)
        {
            p_Table_Form->_setItsCancelReservation_Form(this);
        }
    _setItsTable_Form(p_Table_Form);
}

void CancelReservation_Form::cleanUpRelations() {
    if(itsDatabase != NULL)
        {
            CancelReservation_Form* p_CancelReservation_Form = itsDatabase->getItsCancelReservation_Form();
            if(p_CancelReservation_Form != NULL)
                {
                    itsDatabase->__setItsCancelReservation_Form(NULL);
                }
            itsDatabase = NULL;
        }
    if(itsTable_Form != NULL)
        {
            CancelReservation_Form* p_CancelReservation_Form = itsTable_Form->getItsCancelReservation_Form();
            if(p_CancelReservation_Form != NULL)
                {
                    itsTable_Form->__setItsCancelReservation_Form(NULL);
                }
            itsTable_Form = NULL;
        }
}

void CancelReservation_Form::__setItsDatabase(Database* p_Database) {
    itsDatabase = p_Database;
}

void CancelReservation_Form::_setItsDatabase(Database* p_Database) {
    if(itsDatabase != NULL)
        {
            itsDatabase->__setItsCancelReservation_Form(NULL);
        }
    __setItsDatabase(p_Database);
}

void CancelReservation_Form::_clearItsDatabase() {
    itsDatabase = NULL;
}

void CancelReservation_Form::__setItsTable_Form(Table_Form* p_Table_Form) {
    itsTable_Form = p_Table_Form;
}

void CancelReservation_Form::_setItsTable_Form(Table_Form* p_Table_Form) {
    if(itsTable_Form != NULL)
        {
            itsTable_Form->__setItsCancelReservation_Form(NULL);
        }
    __setItsTable_Form(p_Table_Form);
}

void CancelReservation_Form::_clearItsTable_Form() {
    itsTable_Form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CancelReservation_Form.cpp
*********************************************************************/
