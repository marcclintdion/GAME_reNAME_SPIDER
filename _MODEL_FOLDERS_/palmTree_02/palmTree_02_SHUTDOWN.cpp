                    if(palmTree_02_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &palmTree_02_NORMALMAP);                                                                                
                            palmTree_02_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(palmTree_02_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &palmTree_02_TEXTUREMAP);                                                                               
                            palmTree_02_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(palmTree_02_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &palmTree_02_VBO);                                                                                       
                            palmTree_02_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(palmTree_02_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &palmTree_02_INDICES_VBO);                                                                               
                            palmTree_02_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
