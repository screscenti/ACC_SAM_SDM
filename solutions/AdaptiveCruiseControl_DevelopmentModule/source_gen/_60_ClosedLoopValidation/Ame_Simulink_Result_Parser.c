#include "Ame_Simulink_Result_Parser.h"


#include <libxml/xmlmemory.h>
#include <libxml/parser.h>
#include <libxml/xmlexports.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "Unittest_Helper.h"
#include "___BlockMessages.h"





static uint64_t  Ame_Simulink_Result_Parser_getNoOfEntries(xmlNodePtr ptr);

static uint64_t Ame_Simulink_Result_Parser_size = 0;

char **  Ame_Simulink_Result_Parser_getSimResults(xmlDocPtr doc, xmlNodePtr cur, xmlChar *idParam, xmlChar *nameParam, xmlChar *instanceParam) 
{
  char **values;
  xmlChar *instance;
  values = NULL;
  instance = NULL;
  cur = cur->children;
  while (cur != NULL)
  {
    int64_t simTag;
    simTag = xmlStrcmp(cur->name, ((xmlChar const  *)("simulation")));
    if ( simTag == 0 ) 
    {
      xmlChar *id;
      xmlNodePtr sig;
      id = xmlGetProp(cur, ((xmlChar *)("id")));
      sig = cur->children;
      
      if ( xmlStrcmp(id, idParam) == 0 ) 
      {
        
        while (sig != NULL)
        {
          int64_t tsigTag;
          tsigTag = xmlStrcmp(sig->name, ((xmlChar const  *)("targetSignal")));
          if ( tsigTag == 0 ) 
          {
            xmlChar *name;
            int32_t v;
            int32_t v1;
            
            name = xmlGetProp(sig, ((xmlChar *)("name")));
            v = xmlStrcmp(name, nameParam);
            v1 = 0;
            if ( xmlStrlen(instanceParam) != 0 ) 
            {
              instance = xmlGetProp(sig, ((xmlChar *)("instance")));
              v1 = xmlStrcmp(instance, instanceParam);
            }
            
            if ( v == 0 && v1 == 0 ) 
            {
              xmlNodePtr valPtr;
              uint32_t incr;
              uint64_t noe;
              size_t size_tvar;
              uint64_t loopvar;
              
              valPtr = sig->children;
              
              incr = 0;
              noe = Ame_Simulink_Result_Parser_getNoOfEntries(valPtr);
              size_tvar = ((size_t )(noe)) * sizeof(char *);
              values = ((char **)(malloc(size_tvar)));
              {
                for ( loopvar = 0 ; loopvar < noe; ++loopvar )
                {
                  values[loopvar] = ((char *)(malloc(50 * sizeof(char ))));
                }
              }
              
              while (valPtr != NULL)
              {
                int64_t valTag;
                valTag = xmlStrcmp(valPtr->name, ((xmlChar const  *)("data")));
                if ( valTag == 0 ) 
                {
                  xmlChar *value;
                  value = xmlGetProp(valPtr, ((xmlChar *)("value")));
                  strncpy(values[incr], ((char *)(value)), 50);
                  incr++;
                  xmlFree(value);
                }
                
                valPtr = valPtr->next;
                
              }
              Ame_Simulink_Result_Parser_size = incr;
              return values;
            }
            xmlFree(name);
            xmlFree(instance);
            
            
          } else
          {
            int64_t errortag;
            errortag = xmlStrcmp(sig->name, ((xmlChar const  *)("error")));
            if ( errortag == 0 ) 
            {
              xmlChar *value_error;
              value_error = xmlNodeListGetString(doc, sig->children, 1);
              printf("Error while simulating : \t  %s\n", value_error);
              return NULL;
            }
          }
          sig = sig->next;
          
        }
        
      }
      xmlFree(id);
    }
    cur = cur->next;
  }
  return values;
}

char **  Ame_Simulink_Result_Parser_parseDoc(char const  *docname, char *id, char *name, char *instance) 
{
  xmlDocPtr doc;
  xmlNodePtr cur;
  xmlChar *key;
  int64_t topTag;
  char **values;
  doc = xmlParseFile(docname);
  
  if ( doc == NULL ) 
  {
    printf("The Simulation could not complete\n The output signal values could not be found");
    return NULL;
  }
  cur = xmlDocGetRootElement(doc);
  
  if ( cur == NULL ) 
  {
    xmlFreeDoc(doc);
    return NULL;
  }
  topTag = xmlStrcmp(cur->name, ((xmlChar const  *)("CLSimulationResults")));
  
  if ( topTag != 0 ) 
  {
    xmlFreeDoc(doc);
    return NULL;
  }
  values = Ame_Simulink_Result_Parser_getSimResults(doc, cur, ((xmlChar *)(id)), ((xmlChar *)(name)), ((xmlChar *)(instance)));
  
  xmlFreeDoc(doc);
  
  return values;
  
}

static uint64_t  Ame_Simulink_Result_Parser_getNoOfEntries(xmlNodePtr ptr) 
{
  uint64_t noe;
  noe = 0;
  while (ptr != NULL)
  {
    int64_t valTag;
    valTag = xmlStrcmp(ptr->name, ((xmlChar const  *)("data")));
    if ( valTag == 0 ) 
    {
      /* 
       * doing this because LibXML considers CR/LF as a node with name "text"
       */

      noe++;
    }
    ptr = ptr->next;
  }
  return noe;
}

uint64_t  Ame_Simulink_Result_Parser_getSize(void) 
{
  return Ame_Simulink_Result_Parser_size;
}

