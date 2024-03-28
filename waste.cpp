//if(flag) {
//    QMessageBox::warning(this,"warning","答题模式禁止此操作");
//    return;
//}
//int numOfAnswer = 0;//用于记录解的个数

////在不考虑块与块的关联性的前提下，计算解的个数
////初始化按钮标号
//int buttonOfShow[38];
//for(int i=1;i<38;i++) buttonOfShow[i] = 0;
////初始化被选择的分组
//int buttonGroup1[4] = {32,33,34,35},
//        buttonGroup2[5] = {31,16,17,18,36},
//        buttonGroup3[6] = {30,15,6,7,19,37},
//        buttonGroup4[7] = {29,14,5,1,2,8,20},
//        buttonGroup5[6] = {28,13,4,3,9,21},
//        buttonGroup6[5] = {27,12,11,10,22},
//        buttonGroup7[4] = {26,25,24,23};
////初始化组合数的上下指标
//int n1=4,n2=5,n3=6,n4=7,n5=6,n6=5,n7=4,
//        m1=count[0][0]->text().toInt(),
//        m2=count[0][1]->text().toInt(),
//        m3=count[0][2]->text().toInt(),
//        m4=count[0][3]->text().toInt(),
//        m5=count[0][4]->text().toInt(),
//        m6=count[0][5]->text().toInt(),
//        m7=count[0][6]->text().toInt();
////核心部分
//int a1[m1],a2[m2],a3[m3],a4[m4],a5[m5],a6[m6],a7[m7];
//if(m1!=0){
//    //1
//    for(int i1=0;i1<m1;i1++) a1[i1] = i1+1;
//    for(int j1=m1;a1[0]<=(n1-m1+1);){
//        for(;a1[m1-1]<=n1;a1[m1-1]++){
//            for(int t1=0;t1<m1;t1++)
//                buttonOfShow[buttonGroup1[a1[t1]-1]] = 1;
//            //嵌套2
//            if(m2!=0){
//                for(int i2=0;i2<m2;i2++) a2[i2] = i2+1;
//                for(int j2=m2;a2[0]<=(n2-m2+1);){
//                    for(;a2[m2-1]<=n2;a2[m2-1]++){
//                        for(int t2=0;t2<m2;t2++)
//                            buttonOfShow[buttonGroup2[a2[t2]-1]] = 1;
//                        //嵌套3
//                        if(m3!=0){
//                            for(int i3=0;i3<m3;i3++) a3[i3] = i3+1;
//                            for(int j3=m3;a3[0]<=(n3-m3+1);){
//                                for(;a3[m3-1]<=n3;a3[m3-1]++){
//                                    for(int t3=0;t3<m3;t3++)
//                                        buttonOfShow[buttonGroup3[a3[t3]-1]] = 1;
//                                    //嵌套4
//                                    if(m4!=0){
//                                        for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                                        for(int j4=m4;a4[0]<=(n4-m4+1);){
//                                            for(;a4[m4-1]<=n4;a4[m4-1]++){
//                                                for(int t4=0;t4<m4;t4++)
//                                                    buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                                                //嵌套5
//                                                if(m5!=0){
//                                                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                                            for(int t5=0;t5<m5;t5++)
//                                                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                                            //嵌套6
//                                                            if(m6!=0){
//                                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                                        for(int t6=0;t6<m6;t6++)
//                                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                                        //嵌套7
//                                                                        if(m7!=0){
//                                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                                    for(int t7=0;t7<m7;t7++)
//                                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                                    //验证正确性
//                                                                                    bool flagOfbutton;
//                                                                                    //当有不符时，置为false
//                                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                                    else flagOfbutton=true;
//                                                                                    //都符合时，记录加1
//                                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                                }
//                                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                                    a7[j7]++;
//                                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                                }
//                                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                                            }
//                                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                                            bool flagOfbutton;
//                                                                            //当有不符时，置为false
//                                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                            else flagOfbutton=true;
//                                                                            //都符合时，记录加1
//                                                                            if(flagOfbutton) numOfAnswer++;
//                                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                        }
//                                                                    }
//                                                                    for(j6=m6-2;j6>=0;j6--){
//                                                                        a6[j6]++;
//                                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                                    }
//                                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                                }
//                                                            }else{//忽略第六列
//                                                                //嵌套7
//                                                                if(m7!=0){
//                                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                            for(int t7=0;t7<m7;t7++)
//                                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                            //验证正确性
//                                                                            bool flagOfbutton;
//                                                                            //当有不符时，置为false
//                                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                            else flagOfbutton=true;
//                                                                            //都符合时，记录加1
//                                                                            if(flagOfbutton) numOfAnswer++;
//                                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                        }
//                                                                        for(j7=m7-2;j7>=0;j7--){
//                                                                            a7[j7]++;
//                                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                        }
//                                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                                    }
//                                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                            }

//                                                        }
//                                                        for(j5=m5-2;j5>=0;j5--){
//                                                            a5[j5]++;
//                                                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                                                        }
//                                                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                                    }
//                                                }else{//忽略第五列
//                                                    //嵌套6
//                                                    if(m6!=0){
//                                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                                for(int t6=0;t6<m6;t6++)
//                                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                                //嵌套7
//                                                                if(m7!=0){
//                                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                            for(int t7=0;t7<m7;t7++)
//                                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                            //验证正确性
//                                                                            bool flagOfbutton;
//                                                                            //当有不符时，置为false
//                                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                            else flagOfbutton=true;
//                                                                            //都符合时，记录加1
//                                                                            if(flagOfbutton) numOfAnswer++;
//                                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                        }
//                                                                        for(j7=m7-2;j7>=0;j7--){
//                                                                            a7[j7]++;
//                                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                        }
//                                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                                    }
//                                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                            }
//                                                            for(j6=m6-2;j6>=0;j6--){
//                                                                a6[j6]++;
//                                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                            }
//                                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                        }
//                                                    }else{//忽略第六列
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                }
//                                            }
//                                            for(j4=m4-2;j4>=0;j4--){
//                                                a4[j4]++;
//                                                if(a4[j4]<=(j4+n4-m4+1)) break;
//                                            }
//                                            for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                                        }
//                                    }
//                                    else{//忽略第四列
//                                        //嵌套5
//                                        if(m5!=0){
//                                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                                    for(int t5=0;t5<m5;t5++)
//                                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                                    //嵌套6
//                                                    if(m6!=0){
//                                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                                for(int t6=0;t6<m6;t6++)
//                                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                                //嵌套7
//                                                                if(m7!=0){
//                                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                            for(int t7=0;t7<m7;t7++)
//                                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                            //验证正确性
//                                                                            bool flagOfbutton;
//                                                                            //当有不符时，置为false
//                                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                            else flagOfbutton=true;
//                                                                            //都符合时，记录加1
//                                                                            if(flagOfbutton) numOfAnswer++;
//                                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                        }
//                                                                        for(j7=m7-2;j7>=0;j7--){
//                                                                            a7[j7]++;
//                                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                        }
//                                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                                    }
//                                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                            }
//                                                            for(j6=m6-2;j6>=0;j6--){
//                                                                a6[j6]++;
//                                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                            }
//                                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                        }
//                                                    }else{//忽略第六列
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }

//                                                }
//                                                for(j5=m5-2;j5>=0;j5--){
//                                                    a5[j5]++;
//                                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                                }
//                                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                            }
//                                        }else{//忽略第五列
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                        }
//                                    }
//                                }
//                                for(j3=m3-2;j3>=0;j3--){
//                                    a3[j3]++;
//                                    if(a3[j3]<=(j3+n3-m3+1)) break;
//                                }
//                                for(j3++;j3>0 && j3<m3;j3++) a3[j3] = a3[j3-1]+1;
//                            }
//                        }
//                        else{//忽略第三列
//                            //嵌套4
//                            if(m4!=0){
//                                for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                                for(int j4=m4;a4[0]<=(n4-m4+1);){
//                                    for(;a4[m4-1]<=n4;a4[m4-1]++){
//                                        for(int t4=0;t4<m4;t4++)
//                                            buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                                        //嵌套5
//                                        if(m5!=0){
//                                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                                    for(int t5=0;t5<m5;t5++)
//                                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                                    //嵌套6
//                                                    if(m6!=0){
//                                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                                for(int t6=0;t6<m6;t6++)
//                                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                                //嵌套7
//                                                                if(m7!=0){
//                                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                            for(int t7=0;t7<m7;t7++)
//                                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                            //验证正确性
//                                                                            bool flagOfbutton;
//                                                                            //当有不符时，置为false
//                                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                            else flagOfbutton=true;
//                                                                            //都符合时，记录加1
//                                                                            if(flagOfbutton) numOfAnswer++;
//                                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                        }
//                                                                        for(j7=m7-2;j7>=0;j7--){
//                                                                            a7[j7]++;
//                                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                        }
//                                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                                    }
//                                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                            }
//                                                            for(j6=m6-2;j6>=0;j6--){
//                                                                a6[j6]++;
//                                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                            }
//                                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                        }
//                                                    }else{//忽略第六列
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }

//                                                }
//                                                for(j5=m5-2;j5>=0;j5--){
//                                                    a5[j5]++;
//                                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                                }
//                                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                            }
//                                        }else{//忽略第五列
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                        }
//                                    }
//                                    for(j4=m4-2;j4>=0;j4--){
//                                        a4[j4]++;
//                                        if(a4[j4]<=(j4+n4-m4+1)) break;
//                                    }
//                                    for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                                }
//                            }
//                            else{//忽略第四列
//                                //嵌套5
//                                if(m5!=0){
//                                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                            for(int t5=0;t5<m5;t5++)
//                                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }

//                                        }
//                                        for(j5=m5-2;j5>=0;j5--){
//                                            a5[j5]++;
//                                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                                        }
//                                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                    }
//                                }else{//忽略第五列
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    for(j2=m2-2;j2>=0;j2--){
//                        a2[j2]++;
//                        if(a2[j2]<=(j2+n2-m2+1)) break;
//                    }
//                    for(j2++;j2>0 && j2<m2;j2++) a2[j2] = a2[j2-1]+1;
//                }
//            }else{//忽略第二列
//                //嵌套3
//                if(m3!=0){
//                    for(int i3=0;i3<m3;i3++) a3[i3] = i3+1;
//                    for(int j3=m3;a3[0]<=(n3-m3+1);){
//                        for(;a3[m3-1]<=n3;a3[m3-1]++){
//                            for(int t3=0;t3<m3;t3++)
//                                buttonOfShow[buttonGroup3[a3[t3]-1]] = 1;
//                            //嵌套4
//                            if(m4!=0){
//                                for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                                for(int j4=m4;a4[0]<=(n4-m4+1);){
//                                    for(;a4[m4-1]<=n4;a4[m4-1]++){
//                                        for(int t4=0;t4<m4;t4++)
//                                            buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                                        //嵌套5
//                                        if(m5!=0){
//                                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                                    for(int t5=0;t5<m5;t5++)
//                                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                                    //嵌套6
//                                                    if(m6!=0){
//                                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                                for(int t6=0;t6<m6;t6++)
//                                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                                //嵌套7
//                                                                if(m7!=0){
//                                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                            for(int t7=0;t7<m7;t7++)
//                                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                            //验证正确性
//                                                                            bool flagOfbutton;
//                                                                            //当有不符时，置为false
//                                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                            else flagOfbutton=true;
//                                                                            //都符合时，记录加1
//                                                                            if(flagOfbutton) numOfAnswer++;
//                                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                        }
//                                                                        for(j7=m7-2;j7>=0;j7--){
//                                                                            a7[j7]++;
//                                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                        }
//                                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                                    }
//                                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                            }
//                                                            for(j6=m6-2;j6>=0;j6--){
//                                                                a6[j6]++;
//                                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                            }
//                                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                        }
//                                                    }else{//忽略第六列
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }

//                                                }
//                                                for(j5=m5-2;j5>=0;j5--){
//                                                    a5[j5]++;
//                                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                                }
//                                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                            }
//                                        }else{//忽略第五列
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                        }
//                                    }
//                                    for(j4=m4-2;j4>=0;j4--){
//                                        a4[j4]++;
//                                        if(a4[j4]<=(j4+n4-m4+1)) break;
//                                    }
//                                    for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                                }
//                            }
//                            else{//忽略第四列
//                                //嵌套5
//                                if(m5!=0){
//                                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                            for(int t5=0;t5<m5;t5++)
//                                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }

//                                        }
//                                        for(j5=m5-2;j5>=0;j5--){
//                                            a5[j5]++;
//                                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                                        }
//                                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                    }
//                                }else{//忽略第五列
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                        for(j3=m3-2;j3>=0;j3--){
//                            a3[j3]++;
//                            if(a3[j3]<=(j3+n3-m3+1)) break;
//                        }
//                        for(j3++;j3>0 && j3<m3;j3++) a3[j3] = a3[j3-1]+1;
//                    }
//                }
//                else{//忽略第三列
//                    //嵌套4
//                    if(m4!=0){
//                        for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                        for(int j4=m4;a4[0]<=(n4-m4+1);){
//                            for(;a4[m4-1]<=n4;a4[m4-1]++){
//                                for(int t4=0;t4<m4;t4++)
//                                    buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                                //嵌套5
//                                if(m5!=0){
//                                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                            for(int t5=0;t5<m5;t5++)
//                                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }

//                                        }
//                                        for(j5=m5-2;j5>=0;j5--){
//                                            a5[j5]++;
//                                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                                        }
//                                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                    }
//                                }else{//忽略第五列
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                }
//                            }
//                            for(j4=m4-2;j4>=0;j4--){
//                                a4[j4]++;
//                                if(a4[j4]<=(j4+n4-m4+1)) break;
//                            }
//                            for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                        }
//                    }
//                    else{//忽略第四列
//                        //嵌套5
//                        if(m5!=0){
//                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                    for(int t5=0;t5<m5;t5++)
//                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }

//                                }
//                                for(j5=m5-2;j5>=0;j5--){
//                                    a5[j5]++;
//                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                }
//                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                            }
//                        }else{//忽略第五列
//                            //嵌套6
//                            if(m6!=0){
//                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                        for(int t6=0;t6<m6;t6++)
//                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                    for(j6=m6-2;j6>=0;j6--){
//                                        a6[j6]++;
//                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                    }
//                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                }
//                            }else{//忽略第六列
//                                //嵌套7
//                                if(m7!=0){
//                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                            for(int t7=0;t7<m7;t7++)
//                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                            //验证正确性
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                        for(j7=m7-2;j7>=0;j7--){
//                                            a7[j7]++;
//                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                        }
//                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                    }
//                                }else{//第七列无须在进行组合列举，直接进行判断
//                                    bool flagOfbutton;
//                                    //当有不符时，置为false
//                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                    else flagOfbutton=true;
//                                    //都符合时，记录加1
//                                    if(flagOfbutton) numOfAnswer++;
//                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                }
//                            }
//                        }
//                    }
//                }
//            }

//        }
//        for(j1=m1-2;j1>=0;j1--){
//            a1[j1]++;
//            if(a1[j1]<=(j1+n1-m1+1)) break;
//        }
//        for(j1++;j1>0 && j1<m1;j1++) a1[j1] = a1[j1-1]+1;
//    }
//}else{//忽略第一列
//    //嵌套2
//    if(m2!=0){
//        for(int i2=0;i2<m2;i2++) a2[i2] = i2+1;
//        for(int j2=m2;a2[0]<=(n2-m2+1);){
//            for(;a2[m2-1]<=n2;a2[m2-1]++){
//                for(int t2=0;t2<m2;t2++)
//                    buttonOfShow[buttonGroup2[a2[t2]-1]] = 1;
//                //嵌套3
//                if(m3!=0){
//                    for(int i3=0;i3<m3;i3++) a3[i3] = i3+1;
//                    for(int j3=m3;a3[0]<=(n3-m3+1);){
//                        for(;a3[m3-1]<=n3;a3[m3-1]++){
//                            for(int t3=0;t3<m3;t3++)
//                                buttonOfShow[buttonGroup3[a3[t3]-1]] = 1;
//                            //嵌套4
//                            if(m4!=0){
//                                for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                                for(int j4=m4;a4[0]<=(n4-m4+1);){
//                                    for(;a4[m4-1]<=n4;a4[m4-1]++){
//                                        for(int t4=0;t4<m4;t4++)
//                                            buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                                        //嵌套5
//                                        if(m5!=0){
//                                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                                    for(int t5=0;t5<m5;t5++)
//                                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                                    //嵌套6
//                                                    if(m6!=0){
//                                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                                for(int t6=0;t6<m6;t6++)
//                                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                                //嵌套7
//                                                                if(m7!=0){
//                                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                            for(int t7=0;t7<m7;t7++)
//                                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                            //验证正确性
//                                                                            bool flagOfbutton;
//                                                                            //当有不符时，置为false
//                                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                            else flagOfbutton=true;
//                                                                            //都符合时，记录加1
//                                                                            if(flagOfbutton) numOfAnswer++;
//                                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                        }
//                                                                        for(j7=m7-2;j7>=0;j7--){
//                                                                            a7[j7]++;
//                                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                        }
//                                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                                    }
//                                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                            }
//                                                            for(j6=m6-2;j6>=0;j6--){
//                                                                a6[j6]++;
//                                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                            }
//                                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                        }
//                                                    }else{//忽略第六列
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }

//                                                }
//                                                for(j5=m5-2;j5>=0;j5--){
//                                                    a5[j5]++;
//                                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                                }
//                                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                            }
//                                        }else{//忽略第五列
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                        }
//                                    }
//                                    for(j4=m4-2;j4>=0;j4--){
//                                        a4[j4]++;
//                                        if(a4[j4]<=(j4+n4-m4+1)) break;
//                                    }
//                                    for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                                }
//                            }
//                            else{//忽略第四列
//                                //嵌套5
//                                if(m5!=0){
//                                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                            for(int t5=0;t5<m5;t5++)
//                                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }

//                                        }
//                                        for(j5=m5-2;j5>=0;j5--){
//                                            a5[j5]++;
//                                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                                        }
//                                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                    }
//                                }else{//忽略第五列
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                        for(j3=m3-2;j3>=0;j3--){
//                            a3[j3]++;
//                            if(a3[j3]<=(j3+n3-m3+1)) break;
//                        }
//                        for(j3++;j3>0 && j3<m3;j3++) a3[j3] = a3[j3-1]+1;
//                    }
//                }
//                else{//忽略第三列
//                    //嵌套4
//                    if(m4!=0){
//                        for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                        for(int j4=m4;a4[0]<=(n4-m4+1);){
//                            for(;a4[m4-1]<=n4;a4[m4-1]++){
//                                for(int t4=0;t4<m4;t4++)
//                                    buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                                //嵌套5
//                                if(m5!=0){
//                                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                            for(int t5=0;t5<m5;t5++)
//                                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }

//                                        }
//                                        for(j5=m5-2;j5>=0;j5--){
//                                            a5[j5]++;
//                                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                                        }
//                                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                    }
//                                }else{//忽略第五列
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                }
//                            }
//                            for(j4=m4-2;j4>=0;j4--){
//                                a4[j4]++;
//                                if(a4[j4]<=(j4+n4-m4+1)) break;
//                            }
//                            for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                        }
//                    }
//                    else{//忽略第四列
//                        //嵌套5
//                        if(m5!=0){
//                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                    for(int t5=0;t5<m5;t5++)
//                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }

//                                }
//                                for(j5=m5-2;j5>=0;j5--){
//                                    a5[j5]++;
//                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                }
//                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                            }
//                        }else{//忽略第五列
//                            //嵌套6
//                            if(m6!=0){
//                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                        for(int t6=0;t6<m6;t6++)
//                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                    for(j6=m6-2;j6>=0;j6--){
//                                        a6[j6]++;
//                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                    }
//                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                }
//                            }else{//忽略第六列
//                                //嵌套7
//                                if(m7!=0){
//                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                            for(int t7=0;t7<m7;t7++)
//                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                            //验证正确性
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                        for(j7=m7-2;j7>=0;j7--){
//                                            a7[j7]++;
//                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                        }
//                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                    }
//                                }else{//第七列无须在进行组合列举，直接进行判断
//                                    bool flagOfbutton;
//                                    //当有不符时，置为false
//                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                    else flagOfbutton=true;
//                                    //都符合时，记录加1
//                                    if(flagOfbutton) numOfAnswer++;
//                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//            for(j2=m2-2;j2>=0;j2--){
//                a2[j2]++;
//                if(a2[j2]<=(j2+n2-m2+1)) break;
//            }
//            for(j2++;j2>0 && j2<m2;j2++) a2[j2] = a2[j2-1]+1;
//        }
//    }else{//忽略第二列
//        //嵌套3
//        if(m3!=0){
//            for(int i3=0;i3<m3;i3++) a3[i3] = i3+1;
//            for(int j3=m3;a3[0]<=(n3-m3+1);){
//                for(;a3[m3-1]<=n3;a3[m3-1]++){
//                    for(int t3=0;t3<m3;t3++)
//                        buttonOfShow[buttonGroup3[a3[t3]-1]] = 1;
//                    //嵌套4
//                    if(m4!=0){
//                        for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                        for(int j4=m4;a4[0]<=(n4-m4+1);){
//                            for(;a4[m4-1]<=n4;a4[m4-1]++){
//                                for(int t4=0;t4<m4;t4++)
//                                    buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                                //嵌套5
//                                if(m5!=0){
//                                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                            for(int t5=0;t5<m5;t5++)
//                                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                            //嵌套6
//                                            if(m6!=0){
//                                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                        for(int t6=0;t6<m6;t6++)
//                                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                        //嵌套7
//                                                        if(m7!=0){
//                                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                                    for(int t7=0;t7<m7;t7++)
//                                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                                    //验证正确性
//                                                                    bool flagOfbutton;
//                                                                    //当有不符时，置为false
//                                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                                    else flagOfbutton=true;
//                                                                    //都符合时，记录加1
//                                                                    if(flagOfbutton) numOfAnswer++;
//                                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                                }
//                                                                for(j7=m7-2;j7>=0;j7--){
//                                                                    a7[j7]++;
//                                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                                }
//                                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                            }
//                                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                    }
//                                                    for(j6=m6-2;j6>=0;j6--){
//                                                        a6[j6]++;
//                                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                                    }
//                                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                                }
//                                            }else{//忽略第六列
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }

//                                        }
//                                        for(j5=m5-2;j5>=0;j5--){
//                                            a5[j5]++;
//                                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                                        }
//                                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                                    }
//                                }else{//忽略第五列
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                }
//                            }
//                            for(j4=m4-2;j4>=0;j4--){
//                                a4[j4]++;
//                                if(a4[j4]<=(j4+n4-m4+1)) break;
//                            }
//                            for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                        }
//                    }
//                    else{//忽略第四列
//                        //嵌套5
//                        if(m5!=0){
//                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                    for(int t5=0;t5<m5;t5++)
//                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }

//                                }
//                                for(j5=m5-2;j5>=0;j5--){
//                                    a5[j5]++;
//                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                }
//                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                            }
//                        }else{//忽略第五列
//                            //嵌套6
//                            if(m6!=0){
//                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                        for(int t6=0;t6<m6;t6++)
//                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                    for(j6=m6-2;j6>=0;j6--){
//                                        a6[j6]++;
//                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                    }
//                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                }
//                            }else{//忽略第六列
//                                //嵌套7
//                                if(m7!=0){
//                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                            for(int t7=0;t7<m7;t7++)
//                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                            //验证正确性
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                        for(j7=m7-2;j7>=0;j7--){
//                                            a7[j7]++;
//                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                        }
//                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                    }
//                                }else{//第七列无须在进行组合列举，直接进行判断
//                                    bool flagOfbutton;
//                                    //当有不符时，置为false
//                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                    else flagOfbutton=true;
//                                    //都符合时，记录加1
//                                    if(flagOfbutton) numOfAnswer++;
//                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                }
//                            }
//                        }
//                    }
//                }
//                for(j3=m3-2;j3>=0;j3--){
//                    a3[j3]++;
//                    if(a3[j3]<=(j3+n3-m3+1)) break;
//                }
//                for(j3++;j3>0 && j3<m3;j3++) a3[j3] = a3[j3-1]+1;
//            }
//        }
//        else{//忽略第三列
//            //嵌套4
//            if(m4!=0){
//                for(int i4=0;i4<m4;i4++) a4[i4] = i4+1;
//                for(int j4=m4;a4[0]<=(n4-m4+1);){
//                    for(;a4[m4-1]<=n4;a4[m4-1]++){
//                        for(int t4=0;t4<m4;t4++)
//                            buttonOfShow[buttonGroup4[a4[t4]-1]] = 1;
//                        //嵌套5
//                        if(m5!=0){
//                            for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                            for(int j5=m5;a5[0]<=(n5-m5+1);){
//                                for(;a5[m5-1]<=n5;a5[m5-1]++){
//                                    for(int t5=0;t5<m5;t5++)
//                                        buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                                    //嵌套6
//                                    if(m6!=0){
//                                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                                for(int t6=0;t6<m6;t6++)
//                                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                                //嵌套7
//                                                if(m7!=0){
//                                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                            for(int t7=0;t7<m7;t7++)
//                                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                            //验证正确性
//                                                            bool flagOfbutton;
//                                                            //当有不符时，置为false
//                                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                            else flagOfbutton=true;
//                                                            //都符合时，记录加1
//                                                            if(flagOfbutton) numOfAnswer++;
//                                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                        }
//                                                        for(j7=m7-2;j7>=0;j7--){
//                                                            a7[j7]++;
//                                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                        }
//                                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                                    }
//                                                }else{//第七列无须在进行组合列举，直接进行判断
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                            }
//                                            for(j6=m6-2;j6>=0;j6--){
//                                                a6[j6]++;
//                                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                                            }
//                                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                        }
//                                    }else{//忽略第六列
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }

//                                }
//                                for(j5=m5-2;j5>=0;j5--){
//                                    a5[j5]++;
//                                    if(a5[j5]<=(j5+n5-m5+1)) break;
//                                }
//                                for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                            }
//                        }else{//忽略第五列
//                            //嵌套6
//                            if(m6!=0){
//                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                        for(int t6=0;t6<m6;t6++)
//                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                    for(j6=m6-2;j6>=0;j6--){
//                                        a6[j6]++;
//                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                    }
//                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                }
//                            }else{//忽略第六列
//                                //嵌套7
//                                if(m7!=0){
//                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                            for(int t7=0;t7<m7;t7++)
//                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                            //验证正确性
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                        for(j7=m7-2;j7>=0;j7--){
//                                            a7[j7]++;
//                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                        }
//                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                    }
//                                }else{//第七列无须在进行组合列举，直接进行判断
//                                    bool flagOfbutton;
//                                    //当有不符时，置为false
//                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                    else flagOfbutton=true;
//                                    //都符合时，记录加1
//                                    if(flagOfbutton) numOfAnswer++;
//                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                }
//                            }
//                        }
//                    }
//                    for(j4=m4-2;j4>=0;j4--){
//                        a4[j4]++;
//                        if(a4[j4]<=(j4+n4-m4+1)) break;
//                    }
//                    for(j4++;j4>0 && j4<m4;j4++) a4[j4] = a4[j4-1]+1;
//                }
//            }
//            else{//忽略第四列
//                //嵌套5
//                if(m5!=0){
//                    for(int i5=0;i5<m5;i5++) a5[i5] = i5+1;
//                    for(int j5=m5;a5[0]<=(n5-m5+1);){
//                        for(;a5[m5-1]<=n5;a5[m5-1]++){
//                            for(int t5=0;t5<m5;t5++)
//                                buttonOfShow[buttonGroup5[a5[t5]-1]] = 1;
//                            //嵌套6
//                            if(m6!=0){
//                                for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                                for(int j6=m6;a6[0]<=(n6-m6+1);){
//                                    for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                        for(int t6=0;t6<m6;t6++)
//                                            buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                        //嵌套7
//                                        if(m7!=0){
//                                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                                    for(int t7=0;t7<m7;t7++)
//                                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                                    //验证正确性
//                                                    bool flagOfbutton;
//                                                    //当有不符时，置为false
//                                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                                    else flagOfbutton=true;
//                                                    //都符合时，记录加1
//                                                    if(flagOfbutton) numOfAnswer++;
//                                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                                }
//                                                for(j7=m7-2;j7>=0;j7--){
//                                                    a7[j7]++;
//                                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                                }
//                                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                            }
//                                        }else{//第七列无须在进行组合列举，直接进行判断
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                    }
//                                    for(j6=m6-2;j6>=0;j6--){
//                                        a6[j6]++;
//                                        if(a6[j6]<=(j6+n6-m6+1)) break;
//                                    }
//                                    for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                                }
//                            }else{//忽略第六列
//                                //嵌套7
//                                if(m7!=0){
//                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                            for(int t7=0;t7<m7;t7++)
//                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                            //验证正确性
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                        for(j7=m7-2;j7>=0;j7--){
//                                            a7[j7]++;
//                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                        }
//                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                    }
//                                }else{//第七列无须在进行组合列举，直接进行判断
//                                    bool flagOfbutton;
//                                    //当有不符时，置为false
//                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                    else flagOfbutton=true;
//                                    //都符合时，记录加1
//                                    if(flagOfbutton) numOfAnswer++;
//                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                }
//                            }

//                        }
//                        for(j5=m5-2;j5>=0;j5--){
//                            a5[j5]++;
//                            if(a5[j5]<=(j5+n5-m5+1)) break;
//                        }
//                        for(j5++;j5>0 && j5<m5;j5++) a5[j5] = a5[j5-1]+1;
//                    }
//                }else{//忽略第五列
//                    //嵌套6
//                    if(m6!=0){
//                        for(int i6=0;i6<m6;i6++) a6[i6] = i6+1;
//                        for(int j6=m6;a6[0]<=(n6-m6+1);){
//                            for(;a6[m6-1]<=n6;a6[m6-1]++){
//                                for(int t6=0;t6<m6;t6++)
//                                    buttonOfShow[buttonGroup6[a6[t6]-1]] = 1;
//                                //嵌套7
//                                if(m7!=0){
//                                    for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                                    for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                        for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                            for(int t7=0;t7<m7;t7++)
//                                                buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                            //验证正确性
//                                            bool flagOfbutton;
//                                            //当有不符时，置为false
//                                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                            else flagOfbutton=true;
//                                            //都符合时，记录加1
//                                            if(flagOfbutton) numOfAnswer++;
//                                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                        }
//                                        for(j7=m7-2;j7>=0;j7--){
//                                            a7[j7]++;
//                                            if(a7[j7]<=(j7+n7-m7+1)) break;
//                                        }
//                                        for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                                    }
//                                }else{//第七列无须在进行组合列举，直接进行判断
//                                    bool flagOfbutton;
//                                    //当有不符时，置为false
//                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                    else flagOfbutton=true;
//                                    //都符合时，记录加1
//                                    if(flagOfbutton) numOfAnswer++;
//                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                }
//                            }
//                            for(j6=m6-2;j6>=0;j6--){
//                                a6[j6]++;
//                                if(a6[j6]<=(j6+n6-m6+1)) break;
//                            }
//                            for(j6++;j6>0 && j6<m6;j6++) a6[j6] = a6[j6-1]+1;
//                        }
//                    }else{//忽略第六列
//                        //嵌套7
//                        if(m7!=0){
//                            for(int i7=0;i7<m7;i7++) a7[i7] = i7+1;
//                            for(int j7=m7;a7[0]<=(n7-m7+1);){
//                                for(;a7[m7-1]<=n7;a7[m7-1]++){
//                                    for(int t7=0;t7<m7;t7++)
//                                        buttonOfShow[buttonGroup7[a7[t7]-1]] = 1;
//                                    //验证正确性
//                                    bool flagOfbutton;
//                                    //当有不符时，置为false
//                                    if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                                    else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                                    else flagOfbutton=true;
//                                    //都符合时，记录加1
//                                    if(flagOfbutton) numOfAnswer++;
//                                    for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                                }
//                                for(j7=m7-2;j7>=0;j7--){
//                                    a7[j7]++;
//                                    if(a7[j7]<=(j7+n7-m7+1)) break;
//                                }
//                                for(j7++;j7>0 && j7<m7;j7++) a7[j7] = a7[j7-1]+1;
//                            }
//                        }else{//第七列无须在进行组合列举，直接进行判断
//                            bool flagOfbutton;
//                            //当有不符时，置为false
//                            if(buttonOfShow[32]+buttonOfShow[31]+buttonOfShow[30]+buttonOfShow[29] != count[1][0]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[33]+buttonOfShow[16]+buttonOfShow[15]+buttonOfShow[14]+buttonOfShow[28] != count[1][1]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[34]+buttonOfShow[17]+buttonOfShow[6]+buttonOfShow[5]+buttonOfShow[13]+buttonOfShow[27] != count[1][2]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[35]+buttonOfShow[18]+buttonOfShow[7]+buttonOfShow[1]+buttonOfShow[4]+buttonOfShow[12]+buttonOfShow[26] != count[1][3]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[36]+buttonOfShow[19]+buttonOfShow[2]+buttonOfShow[3]+buttonOfShow[11]+buttonOfShow[25] != count[1][4]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[37]+buttonOfShow[8]+buttonOfShow[9]+buttonOfShow[10]+buttonOfShow[24] != count[1][5]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[20]+buttonOfShow[21]+buttonOfShow[22]+buttonOfShow[23] != count[1][6]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[20]+buttonOfShow[37]+buttonOfShow[36]+buttonOfShow[35] != count[2][0]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[21]+buttonOfShow[8]+buttonOfShow[19]+buttonOfShow[18]+buttonOfShow[34] != count[2][1]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[22]+buttonOfShow[9]+buttonOfShow[2]+buttonOfShow[7]+buttonOfShow[17]+buttonOfShow[33] != count[2][2]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[23]+buttonOfShow[10]+buttonOfShow[3]+buttonOfShow[1]+buttonOfShow[6]+buttonOfShow[16]+buttonOfShow[32] != count[2][3]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[24]+buttonOfShow[11]+buttonOfShow[4]+buttonOfShow[5]+buttonOfShow[15]+buttonOfShow[31] != count[2][4]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[25]+buttonOfShow[12]+buttonOfShow[13]+buttonOfShow[14]+buttonOfShow[30] != count[2][5]->text().toInt()) flagOfbutton=false;
//                            else if(buttonOfShow[26]+buttonOfShow[27]+buttonOfShow[28]+buttonOfShow[29] != count[2][6]->text().toInt()) flagOfbutton=false;
//                            else flagOfbutton=true;
//                            //都符合时，记录加1
//                            if(flagOfbutton) numOfAnswer++;
//                            for(int i=1;i<38;i++) buttonOfShow[i] = 0;//重置
//                        }
//                    }
//                }
//            }
//        }
//    }

//}
//if(numOfAnswer > 1){
//    QMessageBox::information(this,"确认结果","有多解的情况");
//}else if(numOfAnswer == 1){
//    QMessageBox::information(this,"确认结果","有唯一解");
//}else{
//    QMessageBox::warning(this,"确认结果","出错");
//}
