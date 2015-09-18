        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"palmTree_02_DOT3.png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &palmTree_02_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, palmTree_02_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"palmTree_02" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &palmTree_02_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, palmTree_02_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------                                                                                                                                  
        #endif                                                                                                                                             
        //========================================================================                                                                                  
        #ifdef __APPLE__                                                                                                                                            
        //--------------                                                                                                                                            
          spriteImage             = [UIImage imageNamed:@"palmTree_02_DOT3.png"].CGImage;                                                              
          width                   =  CGImageGetWidth(spriteImage);                                                                                                  
          height                  =  CGImageGetHeight(spriteImage);                                                                                                 
          spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                                                                            
          spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
          CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                                                                                   
          CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                                                                                   
          CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                                                                                   
          CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                                                                         
          CGContextRelease(spriteContext);                                                                                                                          
          //---------                                                                                                                                               
                glGenTextures(1, &palmTree_02_NORMALMAP);                                                                                                
                glBindTexture(GL_TEXTURE_2D, palmTree_02_NORMALMAP);                                                                                     
          ConfigureAndLoadTexture(spriteData,  width, height);                                                                                                      
          if(spriteData != NULL)                                                                                                                                    
          {                                                                                                                                                         
                  free(spriteData);                                                                                                                                 
          }                                                                                                                                                         
        //----------------------------------------------------------------------------------------------------------                                                
          spriteImage             = [UIImage imageNamed:@"palmTree_02.png"].CGImage;                                                                   
          width                   =  CGImageGetWidth(spriteImage);                                                                                                  
          height                  =  CGImageGetHeight(spriteImage);                                                                                                 
          spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                                                                            
          spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
          CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                                                                                   
          CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                                                                                   
          CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                                                                                   
          CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                                                                         
          CGContextRelease(spriteContext);                                                                                                                          
          //---------                                                                                                                                               
          glGenTextures(1, &palmTree_02_TEXTUREMAP);                                                                                                     
          glBindTexture(GL_TEXTURE_2D, palmTree_02_TEXTUREMAP);                                                                                          
          ConfigureAndLoadTexture(spriteData,  width, height);                                                                                                      
          if(spriteData != NULL)                                                                                                                                    
          {                                                                                                                                                         
                  free(spriteData);                                                                                                                                 
          }                                                                                                                                                         
        //----                                                                                                                                                      
        #endif                                                                                                                                                      
        //========================================================================                                                                                  
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/palmTree_02/palmTree_02_DOT3.png",          palmTree_02_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/palmTree_02/palmTree_02.png",               palmTree_02_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "palmTree_02.cpp"                                                                                                         
        glGenBuffers(1,              &palmTree_02_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, palmTree_02_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(palmTree_02), palmTree_02, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "palmTree_02_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &palmTree_02_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, palmTree_02_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(palmTree_02_INDICES), palmTree_02_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        palmTree_02_boundingBox[0] = -1.38196;
        palmTree_02_boundingBox[1] = 1.60215;
        palmTree_02_boundingBox[2] = 0.003292;
        palmTree_02_boundingBox[3] = 5.10178;
        palmTree_02_boundingBox[4] = -1.55229;
        palmTree_02_boundingBox[5] = 1.53594;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -1.38196;
        collisionBoxArray[boxCount][1] = 1.60215;
        collisionBoxArray[boxCount][2] = 0.003292;
        collisionBoxArray[boxCount][3] = 5.10178;
        collisionBoxArray[boxCount][4] = -1.55229;
        collisionBoxArray[boxCount][5] = 1.53594;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
