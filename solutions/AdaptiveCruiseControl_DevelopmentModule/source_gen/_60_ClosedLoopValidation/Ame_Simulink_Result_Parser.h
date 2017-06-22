#ifndef AME_SIMULINK_RESULT_PARSER_H
#define AME_SIMULINK_RESULT_PARSER_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>

#include <libxml/tree.h>

#include <libxml/xmlstring.h>



#ifdef __cplusplus
extern "C" {
#endif

char **  Ame_Simulink_Result_Parser_getSimResults(xmlDocPtr doc, xmlNodePtr cur, xmlChar *idParam, xmlChar *nameParam, xmlChar *instanceParam);

char **  Ame_Simulink_Result_Parser_parseDoc(char const  *docname, char *id, char *name, char *instance);

uint64_t  Ame_Simulink_Result_Parser_getSize(void);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
