#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char cLocal_44[24] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[64] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	char* sLocal_72 = NULL;
	char cLocal_73[24] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	char cLocal_85[24] = "";
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	char* sLocal_91 = NULL;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_142[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_173[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_204[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_235 = 0;
	var uLocal_236 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0x84CFE9237092E41B();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x0E4018692D92041D(Global_2424, 1))
		{
			if (!unk_0x0E4018692D92041D(Global_2423, 20))
			{
				if (unk_0xA30F14B621E3269D())
				{
					if (Global_14541)
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14496)
						{
							func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xCE689A8E8C42ED78(&Global_2424, 1);
				}
			}
		}
		if (unk_0x0E4018692D92041D(Global_14732, 0))
		{
			if (!func_107())
			{
				if (!unk_0x0E4018692D92041D(Global_14732, 1))
				{
					unk_0x8950ED5730F62EE8(&Global_14732, 1);
					if (unk_0xB331FCEB94EB05C8())
					{
						uLocal_106 = unk_0x78DCC5D0CB43DEBA();
					}
					else
					{
						iLocal_102 = unk_0xE3903F59E2F22150();
					}
				}
				if (unk_0xB331FCEB94EB05C8())
				{
					iLocal_108 = unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0xE3903F59E2F22150();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_105(&Global_15320, &Global_15936, &Global_15856, Global_15869, Global_16851, Global_16852, 0))
					{
						Global_14732 = 0;
					}
				}
				else
				{
					Global_14732 = 0;
				}
			}
		}
		if ((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0x0E4018692D92041D(Global_4456448.f_17, 4)) && !func_104())
		{
			if (Global_15866 != 0)
			{
				if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
				{
					func_103();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_99();
		}
		switch (Global_15866)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15872)
				{
					if (Global_15862 == 0)
					{
						func_97();
					}
					else
					{
						func_96();
						func_97();
					}
				}
				else if (Global_15862 == 0)
				{
					func_86();
				}
				else
				{
					func_96();
					func_68();
				}
				break;
			
			case 2:
				func_62();
				break;
			
			case 3:
				func_58();
				break;
			
			case 4:
				if (Global_15872)
				{
					if (Global_15874)
					{
						func_57();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_15876 = 0;
	Global_14552 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15877 = 0;
	Global_15878 = 0;
	Global_15879 = 0;
	Global_15880 = 0;
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
	Global_15870 = 0;
	Global_15871 = 0;
	Global_15913 = 0;
	Global_15914 = 0;
	Global_15917 = 0;
	Global_15919 = 0;
	Global_15918 = 0;
	Global_15921 = 0;
	Global_15920 = 0;
	Global_16883 = 0;
	Global_15923 = 0;
	if (Global_14553.f_1 == 10)
	{
	}
	else if (unk_0x0E4018692D92041D(Global_2423, 11))
	{
		func_3();
	}
	Global_15872 = 0;
	Global_15873 = 0;
	Global_15874 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16856 = 0;
	Global_16863 = 0;
	Global_16862 = 0;
	Global_16859 = 0;
	Global_16858 = 0;
	Global_16860 = 0;
	Global_16861 = 0;
	Global_15862 = 0;
	Global_15863 = 0;
	Global_15864 = 0;
	Global_15865 = 0;
	Global_16124 = 0;
	Global_16887 = 5000;
	Global_14536 = 0;
	unk_0xCE689A8E8C42ED78(&Global_2423, 20);
	unk_0xCE689A8E8C42ED78(&Global_2423, 24);
	unk_0xCE689A8E8C42ED78(&Global_2424, 23);
	unk_0xCE689A8E8C42ED78(&Global_2425, 0);
	unk_0xCE689A8E8C42ED78(&Global_2424, 9);
	unk_0xCE689A8E8C42ED78(&Global_2424, 31);
	unk_0xCE689A8E8C42ED78(&Global_2424, 17);
	unk_0xCE689A8E8C42ED78(&Global_2425, 5);
	Global_16850 = 0;
	Global_16849 = 0;
	if (unk_0x12BF789190D82474())
	{
		Global_15866 = 4;
	}
	else
	{
		Global_15866 = 0;
		Global_16877 = 0;
		Global_16888 = unk_0xE3903F59E2F22150();
	}
}

void func_3()
{
	if (!Global_71590)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x0E4018692D92041D(Global_2423, 11))
			{
				if (!Global_14496)
				{
					unk_0x6E690C20044225CB(unk_0x33CD235DF1E6A94E(), 0, 1);
				}
				if (Global_71590)
				{
					unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 244, 1);
					unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 243, 1);
					unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 242, 1);
				}
				unk_0xCE689A8E8C42ED78(&Global_2423, 11);
			}
		}
	}
}

void func_4()
{
	Global_15876 = 0;
	Global_14552 = 0;
	func_2();
}

void func_5()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E()))
		{
			if (Global_15922 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_16858 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16877 == 1)
			{
				unk_0x39B62CDD14CADBFA(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16877 == 0)
		{
			unk_0x3F4DBD0F910C454B();
			iLocal_31 = 0;
		}
	}
	else if (Global_16860 > 0)
	{
		iLocal_37 = unk_0xE3903F59E2F22150();
		if ((iLocal_37 - iLocal_36) > Global_16860)
		{
			unk_0x16E1A618A518A9D5();
			Global_16858 = 0;
		}
	}
	if (Global_16877 == 0)
	{
		if (!unk_0x12BF789190D82474())
		{
			Global_15866 = 6;
		}
	}
}

void func_6()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(0);
		Global_15866 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xA30F14B621E3269D())
	{
		if (!unk_0x0E4018692D92041D(Global_2423, 11))
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (Global_71590 == 0)
					{
						func_55();
					}
				}
			}
		}
		else if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				if (Global_71590 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_71590 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16877 == 1)
		{
			if (Global_16878 == 1)
			{
				unk_0x39B62CDD14CADBFA(1);
				iLocal_31 = 1;
				Global_16878 = 0;
			}
		}
	}
	else if (Global_16877 == 0)
	{
		if (Global_16878 == 1)
		{
			unk_0x3F4DBD0F910C454B();
			iLocal_31 = 0;
			Global_16878 = 0;
		}
	}
	if (Global_15919 == 0)
	{
		if (!Global_15879)
		{
			if (!unk_0x0E4018692D92041D(Global_2424, 31))
			{
				if (!unk_0x0E4018692D92041D(Global_2424, 27))
				{
					if (func_49())
					{
						if (Global_14553.f_1 > 6)
						{
							unk_0x8950ED5730F62EE8(&Global_2424, 24);
							unk_0x8950ED5730F62EE8(&Global_2424, 27);
							unk_0xCE689A8E8C42ED78(&Global_2424, 26);
							unk_0xCE689A8E8C42ED78(&Global_2424, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xA30F14B621E3269D() == 0 && Global_15879 == 0)
	{
		if (Global_15919 == 1)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 23);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&Global_2424, 23);
		}
		if (Global_15923)
		{
			if (Global_15919 == 0)
			{
				Global_15485 = { Global_15924 };
				Global_15942 = { Global_15930 };
				Global_15876 = 0;
				Global_16883 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15921)
		{
			while (Global_15919 == 1)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14553.f_1 < 6)
				{
					Global_15919 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15921)
						{
							iLocal_30 = 1;
							Global_16881 = 1;
							func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_16008, &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
							func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14541)
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x8950ED5730F62EE8(&Global_2423, 17);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x8950ED5730F62EE8(&Global_2423, 17);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16879 = 1;
							if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
							{
								func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_16008, "CELL_300", &(Global_117[Global_1738 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_16008, &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
								func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14541)
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0xCE689A8E8C42ED78(&Global_2423, 17);
						}
					}
					if (func_45(2, Global_14522, 0))
					{
						func_43();
						Global_14479 = 0.19f;
						Global_15919 = 0;
						func_41();
						if (Global_15921)
						{
							Global_15485 = { Global_16002 };
							Global_16883 = 5;
						}
						else if (Global_15864 > 0)
						{
							Global_16124 = 1;
							Global_15866 = 0;
							Global_16887 = 0;
							if (unk_0x0E4018692D92041D(Global_2424, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16850 + 1)
								{
									uLocal_111[iVar0] = func_40(&(Global_16125[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_40(&(Global_16487[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16850, &Global_15155, Global_1738, &Global_15942, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15864 == 2)
							{
								func_22(&Global_15155, Global_1738, &Global_15942, &(Global_16020[0 /*6*/]), &(Global_16072[0 /*6*/]), &(Global_16020[1 /*6*/]), &(Global_16072[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16883 = 1;
							Global_16879 = 0;
							Global_16881 = 0;
							Global_15876 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15485 = { Global_15960 };
							Global_16883 = 1;
						}
						Global_16879 = 0;
						Global_16881 = 0;
						Global_15876 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14523, 0) || unk_0x0E4018692D92041D(Global_2423, 24))
					{
						func_43();
						Global_14479 = 0.19f;
						Global_15919 = 0;
						func_41();
						if (Global_15921)
						{
							Global_15485 = { Global_15996 };
							Global_16883 = 4;
						}
						else if (Global_15864 > 0)
						{
							Global_16124 = 1;
							Global_15866 = 0;
							Global_16887 = 0;
							if (unk_0x0E4018692D92041D(Global_2424, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16849 + 1)
								{
									uLocal_173[iVar1] = func_40(&(Global_16306[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_40(&(Global_16668[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16849, &Global_15155, Global_1738, &Global_15942, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15864 == 2)
							{
								func_22(&Global_15155, Global_1738, &Global_15942, &(Global_16033[0 /*6*/]), &(Global_16085[0 /*6*/]), &(Global_16033[1 /*6*/]), &(Global_16085[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16883 = 2;
							Global_16879 = 0;
							Global_16881 = 0;
							Global_15876 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15485 = { Global_15966 };
							Global_16883 = 2;
						}
						Global_16879 = 0;
						Global_16881 = 0;
						Global_15876 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14525, 0))
					{
						if (Global_15921)
						{
							Global_14479 = 0.19f;
							Global_15919 = 0;
							func_41();
							func_43();
							Global_15485 = { Global_15990 };
							Global_16883 = 3;
							Global_16879 = 0;
							Global_16881 = 0;
							Global_15876 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_15919)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14553.f_1 < 6)
				{
					Global_15919 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14534, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14534, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14541)
						{
							func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xCE689A8E8C42ED78(&Global_2423, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14522, 0))
					{
						func_43();
						Global_15919 = 0;
						func_41();
						unk_0xBB698266C5FDF0A7(Global_14534, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0x614EE52A69097A4C();
						while (!unk_0xBFCC17D9792F43AF(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0x82D58DA03789627A(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_15485 = { Global_15996 };
								Global_16883 = 4;
								break;
							
							case 1:
								Global_15485 = { Global_15990 };
								Global_16883 = 3;
								break;
							
							case 2:
								Global_15485 = { Global_16002 };
								Global_16883 = 5;
								break;
						}
						Global_16879 = 0;
						Global_16881 = 0;
						Global_15876 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14523, 0))
					{
						Global_15919 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15867 == 0)
		{
			unk_0xD92171BC6C48DB90(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_14553.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_15866 = 6;
		}
		unk_0x0F8EAEEC97DDBCB3(-1, "Hang_Up", &Global_14542, 1);
		func_13();
		Global_14553.f_1 = Global_14555;
		func_8();
	}
	else if (Global_14725 == 0)
	{
		if (func_45(2, Global_14521, 0))
		{
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
				{
					if (unk_0x0E4018692D92041D(Global_2423, 20))
					{
					}
					else
					{
						Global_14531 = 1;
						func_41();
						unk_0xD92171BC6C48DB90(0);
						Global_15915 = 1;
						Global_15916 = 1;
						Global_15866 = 6;
						func_13();
						Global_14553.f_1 = Global_14555;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	struct<3> Var0;
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!unk_0x11AE7F6A404414C9(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_3028);
			if (Global_3028 == 1)
			{
				func_46(Global_14534, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_46(Global_14534, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x8950ED5730F62EE8(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_10();
				func_46(Global_14534, "SET_THEME", unk_0xBBDA792448DB5A89(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(4);
					unk_0x4D9DA18AB3C2A466(0);
					unk_0x4D9DA18AB3C2A466(2);
					unk_0x713FEBE56D2BD403("CELL_CONDFON");
					unk_0xD61E5ED1D4E687A5(&Global_15881);
					unk_0x36F3AA9FFAAF8606();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x818901B332D5541D();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_46(Global_14534, "SET_THEME", unk_0xBBDA792448DB5A89(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15879)
				{
					unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(4);
					unk_0x4D9DA18AB3C2A466(0);
					unk_0x4D9DA18AB3C2A466(2);
					unk_0x713FEBE56D2BD403("CELL_CONDFON");
					unk_0xD61E5ED1D4E687A5(&Global_15881);
					unk_0x36F3AA9FFAAF8606();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x818901B332D5541D();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &Var0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_10()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_12(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar2);
								unk_0x818901B332D5541D();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(Global_2429);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar7);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar8);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 8)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if ((iVar1 == 23 && unk_0xCE3CFF625BEBAA04(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x0E4018692D92041D(Global_2424, 6))
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_12(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return;
	}
	switch (Global_14555)
	{
		case 5:
			Global_14555 = 6;
			break;
		
		case 6:
			if (unk_0x0E4018692D92041D(Global_2424, 5))
			{
				Global_14555 = 6;
				unk_0xCE689A8E8C42ED78(&Global_2424, 5);
			}
			else
			{
				Global_14555 = 3;
			}
			break;
		
		case 7:
			Global_14555 = 3;
			break;
		
		case 3:
			if (unk_0x0E4018692D92041D(Global_2424, 5))
			{
				Global_14555 = 6;
				unk_0xCE689A8E8C42ED78(&Global_2424, 5);
			}
			else
			{
				Global_14555 = 3;
			}
			break;
		
		default:
			Global_14555 = 3;
			break;
	}
}

void func_14()
{
	if (iLocal_235)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0)
	{
		if (func_45(2, Global_14529, 0) || unk_0x833B1A3D9F713E03(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_45(2, Global_14530, 0) || unk_0x833B1A3D9F713E03(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	func_46(Global_14534, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_14730 == 0)
		{
			unk_0x59444F5D27C23602(2);
		}
		else
		{
			unk_0x59444F5D27C23602(1);
		}
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_46(Global_14534, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_14730 == 0)
		{
			unk_0x59444F5D27C23602(1);
		}
		else
		{
			unk_0x59444F5D27C23602(2);
		}
	}
}

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x786AF4A44E1B5B4B(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x818901B332D5541D();
}

void func_21()
{
	if (unk_0x11AE7F6A404414C9(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
		}
		else
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam2 > Global_15868)
			{
				if (bParam3 == 0)
				{
					unk_0xD92171BC6C48DB90(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
				}
				else
				{
					func_103();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x12BF789190D82474())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_33();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16862 = Global_16863;
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15485.f_370 = Global_16855;
		Global_15862 = Global_15863;
		Global_15864 = Global_15865;
		if (Global_16124 == 0)
		{
			Global_16020[0 /*6*/] = { Global_16046[0 /*6*/] };
			Global_16020[1 /*6*/] = { Global_16046[1 /*6*/] };
			Global_16072[0 /*6*/] = { Global_16098[0 /*6*/] };
			Global_16072[1 /*6*/] = { Global_16098[1 /*6*/] };
			Global_16033[0 /*6*/] = { Global_16059[0 /*6*/] };
			Global_16033[1 /*6*/] = { Global_16059[1 /*6*/] };
			Global_16085[0 /*6*/] = { Global_16111[0 /*6*/] };
			Global_16085[1 /*6*/] = { Global_16111[1 /*6*/] };
		}
		if (Global_15872)
		{
			unk_0xCE689A8E8C42ED78(&Global_2423, 20);
			unk_0xCE689A8E8C42ED78(&Global_2424, 17);
			unk_0xCE689A8E8C42ED78(&Global_2425, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x735057E6A0704A43(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (Global_16124 == 0)
					{
						if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
						{
							return 0;
						}
						if (unk_0x63E238348058FF52(unk_0x95B959F18401C09A()))
						{
							return 0;
						}
						if (unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()))
						{
							return 0;
						}
						if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
						{
							return 0;
						}
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_24();
			Global_15876 = bParam3;
		}
		Global_15868 = iParam2;
		if (Global_15862 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15862)
			{
				StringCopy(&(Global_15485.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15485.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14732 = 0;
		func_48();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15868 || iParam2 == Global_15868)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_103();
	}
	return 0;
}

void func_24()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	unk_0xCE689A8E8C42ED78(&Global_2424, 16);
}

int func_25()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52370FB78E42E275() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x1D819CC3EBBF0BFB(unk_0x33CD235DF1E6A94E(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_27()
{
	if (func_12(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_28();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_29()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_32(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_31(unk_0x33CD235DF1E6A94E());
			if (func_30(iVar0) && (!func_12(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_30(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(uParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_36(var uParam0)
{
	Global_15863 = uParam0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_15880 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)
{
	return uParam0;
}

void func_41()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Accept", &Global_14542, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		unk_0x59444F5D27C23602(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (!Global_14496)
				{
					if (!unk_0x0E4018692D92041D(Global_2423, 11))
					{
						func_55();
					}
				}
			}
		}
	}
}

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
		{
			return 0;
		}
		if (unk_0xB5D4E8F757C24136(unk_0x33CD235DF1E6A94E(), 0))
		{
			return 0;
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!unk_0x051B931529C63ADC())
			{
				if (unk_0x8AE34E8B10270D31(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E()) || unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E())) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x4638E26BEF5EAFDC(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x051B931529C63ADC()))
	{
		iVar2 = 1;
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				uVar3 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if ((((((((unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(uVar3)) || unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(uVar3))) || unk_0x86A90EB179092418(unk_0x541D5C57194E73C4(uVar3))) || unk_0x541D5C57194E73C4(uVar3) == joaat("seashark")) || unk_0x541D5C57194E73C4(uVar3) == joaat("seashark2")) || unk_0x541D5C57194E73C4(uVar3) == joaat("rhino")) || unk_0x541D5C57194E73C4(uVar3) == joaat("submersible")) || unk_0x541D5C57194E73C4(uVar3) == joaat("submersible2")) || unk_0x541D5C57194E73C4(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269586 || iVar2 == 1)
	{
		if (unk_0x1BCDA92AD0A7835B(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
		{
			if (unk_0x1BCDA92AD0A7835B(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x833B1A3D9F713E03(iParam0, uParam1) || (iParam2 == 1 && unk_0x5EBE50D55314CEAD(iParam0, iParam1)))
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			if (unk_0x86CF3D110E5DD82F() == 0 || (unk_0xE3F7CBC28F745843() && unk_0x5D79F3D06EB318A0(2)))
			{
				return 0;
			}
		}
		if (unk_0xD9C92B0885A075F8() || unk_0x15C85368E432C647())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x818901B332D5541D();
}

void func_47()
{
	if (func_44())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (!Global_14496)
				{
					if (unk_0x0E4018692D92041D(Global_2423, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD92171BC6C48DB90(0);
	Global_15866 = 1;
}

int func_49()
{
	if (unk_0xB331FCEB94EB05C8())
	{
		iLocal_108 = unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0xE3903F59E2F22150();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (func_53())
	{
		return;
	}
	if (Global_14725)
	{
		func_51(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_25())
	{
		Global_14553.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_53()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_54()
{
	if (func_45(2, Global_14530, 0))
	{
		if (Global_16877 == 0)
		{
			if (Global_15872)
			{
				if (unk_0x0E4018692D92041D(Global_2424, 17))
				{
				}
				else
				{
					unk_0x3D966CDF3760E956();
				}
			}
		}
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_56() && unk_0xB5D4E8F757C24136(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_71590)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && iVar1 == 0)
		{
			iVar2 = unk_0x063A77907C209DC4(unk_0x33CD235DF1E6A94E(), 0);
			if (Global_71590)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xFB6FED41DB480F1C(unk_0x33CD235DF1E6A94E()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xFB6FED41DB480F1C(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = 1;
			}
			if (!Global_14496)
			{
				if (Global_1738 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
						{
							if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
							{
							}
							else
							{
								if (Global_71590)
								{
									unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 244, 0);
									unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 243, 0);
									unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 242, 0);
								}
								unk_0x8950ED5730F62EE8(&Global_2423, 11);
								unk_0x6E690C20044225CB(unk_0x33CD235DF1E6A94E(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_56()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_57()
{
	if (Global_71590 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16879 = 1;
		if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
		{
			func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_16008, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_16008, &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
			func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14479 = 0.2f;
		if (Global_14541)
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xCE689A8E8C42ED78(&Global_2423, 17);
	}
	if (Global_15919 == 1)
	{
		if (Global_14553.f_1 < 6)
		{
			Global_15919 = 0;
		}
		else
		{
			if (Global_14493 == 0)
			{
				if (func_45(2, Global_14522, 0))
				{
					Global_14479 = 0.19f;
					Global_15919 = 0;
					func_41();
					Global_16884 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14523, 0))
			{
				Global_14479 = 0.19f;
				Global_15919 = 0;
				func_41();
				Global_16884 = 2;
			}
		}
	}
	else if (Global_16884 == 2)
	{
		if (Global_15867 == 0)
		{
			unk_0xD92171BC6C48DB90(0);
			Global_15866 = 6;
		}
		func_13();
		Global_14553.f_1 = Global_14555;
		func_8();
	}
	else if (!unk_0xA30F14B621E3269D())
	{
		iLocal_32 = 0;
		unk_0xD92171BC6C48DB90(0);
		Global_15866 = 6;
		unk_0x0F8EAEEC97DDBCB3(-1, "Hang_Up", &Global_14542, 1);
		func_13();
		Global_14553.f_1 = Global_14555;
		func_8();
	}
}

void func_58()
{
	if (Global_14733 == 1)
	{
		if (unk_0xA30F14B621E3269D())
		{
			if (unk_0xDCE8BF85629FA987())
			{
				Global_14733 = 0;
			}
		}
		if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			Global_14733 = 0;
			unk_0xD92171BC6C48DB90(0);
			Global_15866 = 6;
		}
	}
	if (unk_0xC9D9444186B5A374() > iLocal_35)
	{
		if (Global_14733 == 1)
		{
			Global_14733 = 0;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() < Global_16887 || Global_14733 == 1)
	{
		if (func_45(2, Global_14521, 0))
		{
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
				{
					if (unk_0x0E4018692D92041D(Global_2423, 20))
					{
					}
					else
					{
						Global_14531 = 1;
						func_41();
						unk_0xD92171BC6C48DB90(0);
						Global_15915 = 1;
						Global_15866 = 6;
						unk_0xCE689A8E8C42ED78(&Global_2423, 27);
						if (!Global_15877)
						{
							unk_0x8950ED5730F62EE8(&Global_2424, 5);
						}
						func_13();
						Global_14553.f_1 = Global_14555;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 27);
		Global_15866 = 4;
		Global_15923 = 0;
		func_61();
		func_60();
		if (!Global_15879)
		{
			if (Global_16883 == 0)
			{
				if (!unk_0x0E4018692D92041D(Global_2425, 5))
				{
					unk_0x16E1A618A518A9D5();
				}
				unk_0xCE689A8E8C42ED78(&Global_2425, 5);
			}
			else
			{
				unk_0xECA228DEF8BEFFBF(Global_15485.f_368, Global_15485.f_369);
			}
		}
		func_59();
	}
}

void func_59()
{
	if (unk_0xB331FCEB94EB05C8())
	{
		uLocal_107 = unk_0x78DCC5D0CB43DEBA();
	}
	else
	{
		iLocal_104 = unk_0xE3903F59E2F22150();
	}
}

void func_60()
{
	if (Global_15879)
	{
		if (Global_71590)
		{
			if (unk_0x11AE7F6A404414C9(Global_14534))
			{
				if (!unk_0x4CE1DD5CFC1F941E())
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_1723), 15);
				}
			}
		}
	}
}

void func_61()
{
	if (unk_0x11AE7F6A404414C9(Global_14534))
	{
		if (!Global_15874)
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15879)
			{
				unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(4);
				unk_0x4D9DA18AB3C2A466(0);
				unk_0x4D9DA18AB3C2A466(2);
				unk_0x713FEBE56D2BD403("CELL_CONDFON");
				unk_0xD61E5ED1D4E687A5(&Global_15881);
				unk_0x36F3AA9FFAAF8606();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x818901B332D5541D();
			}
			else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
			{
				func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_108(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_219", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_62()
{
	if (unk_0xB331FCEB94EB05C8())
	{
		iLocal_109 = unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), uLocal_95);
		iLocal_110 = unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0xE3903F59E2F22150();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0xE3903F59E2F22150();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_15913 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (unk_0x0E4018692D92041D(Global_2423, 14))
				{
					if (unk_0x11AE7F6A404414C9(Global_14534))
					{
						func_41();
						Global_14552 = 2;
						func_61();
						func_60();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
			{
				if (unk_0x11AE7F6A404414C9(Global_14534))
				{
					func_41();
					Global_14552 = 2;
					func_61();
					func_60();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_14552 = 3;
	}
	if (Global_14552 == 2)
	{
		iLocal_30 = 0;
		Global_15866 = 4;
		func_55();
		Global_15923 = 0;
		func_61();
		func_60();
		if (!Global_15879)
		{
			if (Global_16883 == 0)
			{
				unk_0x16E1A618A518A9D5();
			}
			else
			{
				unk_0xECA228DEF8BEFFBF(Global_15485.f_368, Global_15485.f_369);
			}
		}
		func_59();
		Global_16882 = 0;
	}
	if (Global_15913 == 0)
	{
		if (Global_14552 == 3)
		{
			if (Global_15879)
			{
				func_64();
				func_50(0);
			}
			else
			{
				func_63();
				Global_16882 = 1;
				unk_0xD92171BC6C48DB90(0);
				Global_15866 = 6;
				func_13();
				Global_14553.f_1 = Global_14555;
				func_8();
			}
		}
	}
	else if (Global_14552 == 3)
	{
	}
}

void func_63()
{
}

void func_64()
{
	Global_2534821.f_2 = 1;
	Global_2534821.f_38 = 1;
	if (unk_0x43E505744A9B715D())
	{
		if (unk_0x7DEC10D4DA1DCC2C())
		{
			while (unk_0x7A7E39C1A0C7651C())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x44EFDF16AE23D81B();
			Global_2534821 = 0;
			Global_2534821.f_2 = 0;
		}
		else if (func_67(Global_2534821.f_20))
		{
			if (unk_0xFC40DD2526841632(&(Global_2534821.f_20)))
			{
				if (!unk_0xE97D3E05A6165D8D(&(Global_2534821.f_20)))
				{
					func_65();
				}
			}
		}
		else
		{
			func_65();
		}
	}
	else
	{
		func_65();
	}
	if (Global_2534821.f_37)
	{
		func_50(0);
	}
	Global_2534821.f_37 = 0;
	Global_2534821.f_3 = 0;
}

void func_65()
{
	Global_2534821.f_1 = 0;
	Global_2534821 = 0;
	Global_2534821.f_2 = 0;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	StringCopy(&(Global_2534821.f_4), "", 64);
	StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
	Global_2534821.f_38 = 0;
	Global_2534821.f_56 = 0;
	Global_2534821.f_57 = 0;
	Global_2534821.f_58 = -2;
	Global_2534821.f_3 = 0;
	func_66(&(Global_2534821.f_20));
}

void func_66(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_67(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xEC566F0D860729D3(&uParam0, 13);
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_15862)
	{
		func_85();
		func_84();
		func_83();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_15485.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_14734[iVar2 /*6*/] = { Global_15485.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_14734[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14734[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14734[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0xEAF855A7DC28BC8D(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0x434854E9CAE13C4A(&cLocal_38), 64);
				iVar3 = func_82(iVar13);
				iVar4 = func_81(iVar13);
				uVar5 = func_79(iVar13);
				uLocal_82 = func_78();
				uLocal_83 = func_77();
				uLocal_84 = func_76();
				uVar6 = func_75(iVar13);
				uVar7 = func_74(iVar13);
				uVar8 = func_73(iVar13);
				uVar12 = func_72(iVar13);
				uVar9 = func_71(iVar13);
				uVar10 = func_70(iVar13);
				uVar11 = func_69(iVar13);
				if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar2 /*6*/])))
				{
					if (unk_0xCE3CFF625BEBAA04(&(Global_14734[iVar2 /*6*/]), &(Global_15485.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x21D9C65BE88395FF(iVar3, &cLocal_50, &(Global_14734[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0xEAF855A7DC28BC8D(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0x434854E9CAE13C4A(&cLocal_44), 64);
				iVar3 = func_82(0);
				iVar4 = func_81(0);
				uVar5 = func_79(0);
				uLocal_82 = func_78();
				uLocal_83 = func_77();
				uLocal_84 = func_76();
				uVar6 = func_75(0);
				uVar7 = func_74(0);
				uVar8 = func_73(0);
				uVar12 = func_72(0);
				uVar9 = func_71(0);
				uVar10 = func_70(0);
				uVar11 = func_69(0);
				unk_0x21D9C65BE88395FF(iVar3, &cLocal_50, &(Global_15485.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14734[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14734[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15872 == 0)
	{
		unk_0x004D72358F8F7AEE(uLocal_83);
		unk_0x4F761F5902D04A47(uLocal_84);
		unk_0xFFAA917D84BA05AB(Global_15485.f_368, Global_15485.f_369, Global_15485.f_370, uLocal_82);
		Global_15866 = 4;
	}
}

int func_69(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0xCE3CFF625BEBAA04(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0xCE3CFF625BEBAA04(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0xCE3CFF625BEBAA04(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0xCE3CFF625BEBAA04(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 2, 3);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 1, 2);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78()
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 0, 1);
	if (unk_0xCE3CFF625BEBAA04(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_80(uVar0);
}

int func_80(var uParam0)
{
	if (unk_0xCE3CFF625BEBAA04(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xCE3CFF625BEBAA04(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_66), (iParam0 * 3 + 1), iParam0 * 3 + 2);
	return func_80(uVar0);
}

int func_82(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_80(uVar0);
}

void func_83()
{
	cLocal_85 = { Global_15485.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xEAF855A7DC28BC8D(&cLocal_85))
	{
		sLocal_91 = unk_0x434854E9CAE13C4A(&cLocal_85);
		if (unk_0x6D2E2622CA149402(sLocal_91))
		{
		}
	}
}

void func_84()
{
	cLocal_73 = { Global_15485.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xEAF855A7DC28BC8D(&cLocal_73))
	{
		sLocal_79 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 0, 1);
		if (unk_0x6D2E2622CA149402(sLocal_79))
		{
		}
		sLocal_80 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 1, 2);
		if (unk_0x6D2E2622CA149402(sLocal_80))
		{
		}
		sLocal_81 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 2, 3);
		if (unk_0x6D2E2622CA149402(sLocal_81))
		{
		}
	}
}

void func_85()
{
	cLocal_66 = { Global_15485.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xEAF855A7DC28BC8D(&cLocal_66))
	{
		sLocal_72 = unk_0x434854E9CAE13C4A(&cLocal_66);
		if (unk_0x6D2E2622CA149402(sLocal_72))
		{
		}
	}
}

void func_86()
{
	func_87();
	unk_0x004D72358F8F7AEE(uLocal_83);
	unk_0x4F761F5902D04A47(uLocal_84);
	if (Global_16858)
	{
		unk_0x3D6AA36F63214904(Global_15485.f_368, Global_15485.f_369, Global_15485.f_370, uLocal_82);
		iLocal_36 = unk_0xE3903F59E2F22150();
	}
	else
	{
		unk_0xFFAA917D84BA05AB(Global_15485.f_368, Global_15485.f_369, Global_15485.f_370, uLocal_82);
	}
	Global_15866 = 4;
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x1676DEBF1F768296(&Global_15942))
	{
		if (unk_0xCE3CFF625BEBAA04(&Global_15942, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0xF5DB888C353E2BED() || unk_0xDB36A8F522CBC12D())
		{
			if (Global_1573347 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_71590 || func_95())
		{
			if (Global_1573347 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_93())
		{
			iVar14 = 1;
		}
		if (func_92(unk_0x36163153849DFDA1(&Global_15942)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15868 < 5 || Global_15868 == 10) || Global_15868 == 12) || Global_15868 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0x2EE8D1440C9060EF(&Global_15942, 7);
				while (!unk_0x8A7F864DAB908749(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0xD3B8030CB4E487C9(&Global_15942, 15);
				while (!unk_0x8A7F864DAB908749(15))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0x2EE8D1440C9060EF(&Global_15942, 6);
			while (!unk_0x8A7F864DAB908749(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xD3B8030CB4E487C9(&Global_15942, 14);
			while (!unk_0x8A7F864DAB908749(14))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0xF8206F55D10B747C();
	func_91();
	func_90();
	func_89();
	func_88();
	Global_16876 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_15485 };
		StringConCat(&cLocal_44, "A", 24);
		Global_14734[iVar2 /*6*/] = { Global_15485 };
		StringConCat(&(Global_14734[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14734[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14734[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0xEAF855A7DC28BC8D(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0x434854E9CAE13C4A(&cLocal_38), 64);
			iVar3 = func_82(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4269496 == 0)
				{
				}
			}
			iVar4 = func_81(iVar2);
			uVar5 = func_79(iVar2);
			uLocal_82 = func_78();
			uLocal_83 = func_77();
			uLocal_84 = func_76();
			uVar6 = func_75(iVar2);
			uVar7 = func_74(iVar2);
			uVar8 = func_73(iVar2);
			uVar12 = func_72(iVar2);
			uVar9 = func_71(iVar2);
			uVar10 = func_70(iVar2);
			uVar11 = func_69(iVar2);
			if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar2 /*6*/])))
			{
				if (Global_16856 == 0 && Global_16862 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x21D9C65BE88395FF(iVar3, &cLocal_50, &(Global_14734[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0xCE3CFF625BEBAA04(&(Global_14734[iVar2 /*6*/]), &Global_16864))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x21D9C65BE88395FF(iVar3, &cLocal_50, &(Global_14734[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16876 = iVar2;
					if (Global_16862 == 1)
					{
						Global_16862 = 0;
					}
				}
			}
			else if (Global_16862 == 0 && Global_16856 == 0)
			{
				unk_0x21D9C65BE88395FF(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0xEAF855A7DC28BC8D(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0x434854E9CAE13C4A(&cLocal_44), 64);
				iVar3 = func_82(iVar2);
				iVar4 = func_81(iVar2);
				uVar5 = func_79(iVar2);
				uLocal_82 = func_78();
				uLocal_83 = func_77();
				uLocal_84 = func_76();
				uVar6 = func_75(iVar2);
				uVar7 = func_74(iVar2);
				uVar8 = func_73(iVar2);
				uVar12 = func_72(iVar2);
				uVar9 = func_71(iVar2);
				uVar10 = func_70(iVar2);
				uVar11 = func_69(iVar2);
				unk_0x21D9C65BE88395FF(iVar3, &cLocal_50, &Global_15485, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15155[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0x765F6FEEFF39224F(Global_15155[iVar0 /*10*/]) || Global_15155[iVar0 /*10*/] == 0)
			{
				unk_0x83E0B9F1391440C9(iVar0, Global_15155[iVar0 /*10*/], &(Global_15155[iVar0 /*10*/].f_1));
			}
			if (Global_15155.f_161 == iVar0)
			{
				if ((Global_15155.f_162 != 0f && Global_15155.f_162.f_1 != 0f) && Global_15155.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x506993AD40FE7CF1(Global_15155.f_161, Global_15155.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4269496 == 1)
	{
		Global_4269496 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4269315[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x765F6FEEFF39224F(Global_4269315[iVar0 /*9*/]) || Global_4269315[iVar0 /*9*/] == 0)
				{
					unk_0x83E0B9F1391440C9(Global_4269315[iVar0 /*9*/].f_8, Global_4269315[iVar0 /*9*/], &(Global_4269315[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_89()
{
	cLocal_85 = { Global_15485 };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xEAF855A7DC28BC8D(&cLocal_85))
	{
		sLocal_91 = unk_0x434854E9CAE13C4A(&cLocal_85);
		if (unk_0x6D2E2622CA149402(sLocal_91))
		{
		}
	}
}

void func_90()
{
	cLocal_73 = { Global_15485 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xEAF855A7DC28BC8D(&cLocal_73))
	{
		sLocal_79 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 0, 1);
		if (unk_0x6D2E2622CA149402(sLocal_79))
		{
		}
		sLocal_80 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 1, 2);
		if (unk_0x6D2E2622CA149402(sLocal_80))
		{
		}
		sLocal_81 = unk_0x874DC40B8D8FD604(unk_0x434854E9CAE13C4A(&cLocal_73), 2, 3);
		if (unk_0x6D2E2622CA149402(sLocal_81))
		{
		}
	}
}

void func_91()
{
	cLocal_66 = { Global_15485 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xEAF855A7DC28BC8D(&cLocal_66))
	{
		sLocal_72 = unk_0x434854E9CAE13C4A(&cLocal_66);
		if (unk_0x6D2E2622CA149402(sLocal_72))
		{
		}
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
			return 1;
		
		default:
	}
	return 0;
}

int func_93()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_94(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_94(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_94(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

var func_95()
{
	return Global_1312844;
}

void func_96()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xF5DB888C353E2BED() || unk_0xDB36A8F522CBC12D())
	{
		if (Global_1573347 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_71590)
	{
		if (Global_1573347 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_93())
	{
		iVar1 = 1;
	}
	if (unk_0x1676DEBF1F768296(&Global_15942))
	{
		if (unk_0xCE3CFF625BEBAA04(&Global_15942, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_92(unk_0x36163153849DFDA1(&Global_15942)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15868 < 5 || Global_15868 == 10) || Global_15868 == 12) || Global_15868 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0x2EE8D1440C9060EF(&Global_15942, 7);
			while (!unk_0x8A7F864DAB908749(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xD3B8030CB4E487C9(&Global_15942, 15);
			while (!unk_0x8A7F864DAB908749(15))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0x2EE8D1440C9060EF(&Global_15942, 6);
		while (!unk_0x8A7F864DAB908749(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0xD3B8030CB4E487C9(&Global_15942, 14);
		while (!unk_0x8A7F864DAB908749(14))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0xF8206F55D10B747C();
	func_88();
}

void func_97()
{
	while (Global_14536 == 1 && unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_14536 = 0;
	if (unk_0x0E4018692D92041D(Global_2423, 20))
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 1);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2424, 1);
	}
	Global_14537 = 0;
	if (Global_15862 == 0)
	{
		if (!Global_15879)
		{
			func_87();
		}
	}
	else
	{
		func_68();
	}
	Global_14733 = 0;
	if (Global_15876)
	{
		if (Global_16883 == 0)
		{
			if (Global_15879 == 0)
			{
				iLocal_34 = 5000;
				unk_0x85C687D051F75384(Global_15485.f_368, Global_15485.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_14733 = 1;
		unk_0x5AE11BC36633DE4E(0);
		while ((Global_14733 == 1 && Global_15866 == 1) && unk_0xC9D9444186B5A374() < iLocal_34)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				Global_14733 = 0;
				unk_0xD92171BC6C48DB90(0);
				Global_15866 = 6;
			}
			if (unk_0xA30F14B621E3269D())
			{
				if (unk_0xDCE8BF85629FA987())
				{
					Global_14733 = 0;
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > iLocal_34)
		{
		}
		if (Global_15866 != 1)
		{
		}
		if (Global_14733 == 0)
		{
		}
	}
	Global_14733 = 0;
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 0) || Global_15866 != 1) || Global_14519 == 1)
	{
		unk_0xD92171BC6C48DB90(0);
		Global_15866 = 6;
	}
	else
	{
		if (Global_15874)
		{
			Global_16884 = 0;
			iLocal_32 = 0;
		}
		if (Global_15876 == 0)
		{
			if (Global_15917 == 0)
			{
				Global_14555 = Global_14553.f_1;
				Global_15917 = 1;
			}
			iLocal_30 = 0;
			if (Global_16883 == 0)
			{
				unk_0x85C687D051F75384(Global_15485.f_368, Global_15485.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_15866 = 3;
				Global_14733 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0x8950ED5730F62EE8(&Global_2423, 27);
				unk_0xC1B1E9A034A63A62(0);
			}
			else
			{
				Global_14733 = 0;
				Global_15866 = 4;
			}
			Global_14552 = 0;
			if (Global_15877 == 1)
			{
				if (Global_14553.f_1 == 10)
				{
				}
				if (!Global_14553.f_1 == 9)
				{
					if (Global_14553.f_1 > 4)
					{
						if (Global_14536 == 0)
						{
							Global_14553.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14553.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14553.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (Global_14733 == 1)
					{
						if (unk_0xA30F14B621E3269D())
						{
							if (unk_0xDCE8BF85629FA987())
							{
								Global_14733 = 0;
							}
						}
					}
				}
				if (Global_14553.f_1 == 6)
				{
				}
				if (Global_14553.f_1 == 10)
				{
				}
				if (Global_14553.f_1 == 3)
				{
					unk_0xD92171BC6C48DB90(0);
					Global_15866 = 6;
					Global_14537 = 1;
					return;
				}
				Global_14553.f_1 = 9;
				func_8();
			}
			if (unk_0xB331FCEB94EB05C8())
			{
				uLocal_101 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				iLocal_99 = unk_0xE3903F59E2F22150();
			}
			while (Global_14553.f_1 != 9 && Global_14536 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14733 == 1)
				{
					if (unk_0xA30F14B621E3269D())
					{
						if (unk_0xDCE8BF85629FA987())
						{
							Global_14733 = 0;
						}
					}
				}
				if (unk_0xB331FCEB94EB05C8())
				{
					iLocal_108 = unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0xE3903F59E2F22150();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16882 = 1;
						Global_14536 = 1;
					}
				}
			}
			if (!unk_0x0E4018692D92041D(Global_2423, 11))
			{
				if (func_44() == 0)
				{
					func_55();
				}
			}
			if (Global_14536 == 0)
			{
				if (!Global_16883 == 0)
				{
					Global_15923 = 0;
					func_61();
					func_60();
					if (!Global_15879)
					{
						if (Global_16883 == 0)
						{
							unk_0x16E1A618A518A9D5();
						}
						else
						{
							unk_0xECA228DEF8BEFFBF(Global_15485.f_368, Global_15485.f_369);
						}
					}
					func_59();
				}
			}
			else
			{
				func_98();
				Global_14537 = 1;
			}
		}
		else
		{
			Global_14552 = 1;
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (Global_14553.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0xCE689A8E8C42ED78(&Global_2424, 21);
				}
			}
			if (Global_15917 == 0)
			{
				Global_14555 = Global_14553.f_1;
				Global_15917 = 1;
			}
			if (Global_14553.f_1 == 3)
			{
				Global_14553.f_1 = 4;
			}
			else
			{
				while (Global_14553.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (Global_14553.f_1 == 6)
				{
				}
				Global_14553.f_1 = 9;
				func_8();
			}
			if (unk_0xB331FCEB94EB05C8())
			{
				uLocal_101 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				iLocal_99 = unk_0xE3903F59E2F22150();
			}
			while (Global_14553.f_1 != 9 && Global_14536 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0xB331FCEB94EB05C8())
				{
					iLocal_108 = unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0xE3903F59E2F22150();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16882 = 1;
						Global_14536 = 1;
						unk_0xCE689A8E8C42ED78(&Global_2424, 21);
					}
				}
			}
			if (Global_14536 == 0)
			{
				Global_15866 = 2;
			}
			else
			{
				func_98();
				Global_14537 = 1;
			}
			if (unk_0xB331FCEB94EB05C8())
			{
				uLocal_95 = unk_0x78DCC5D0CB43DEBA();
				uLocal_98 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				iLocal_93 = unk_0xE3903F59E2F22150();
				iLocal_96 = unk_0xE3903F59E2F22150();
			}
		}
	}
}

void func_98()
{
	Global_14732 = 0;
	func_103();
}

void func_99()
{
	float fVar0;
	
	fVar0 = func_100(Global_14506[Global_14498 /*3*/], Global_14499[Global_14498 /*3*/], Global_14513, Global_14484, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16880 == 0)
		{
			unk_0xDFF589A2149528CE(1);
		}
		iLocal_32 = 0;
	}
}

float func_100(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4269587 == 0)
	{
		if (unk_0x0E4018692D92041D(Global_2423, 14) && Global_14553.f_1 < 4)
		{
			unk_0x4951EE4BB7B6B4F7(&Var0);
			if (Global_14506[Global_14498 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269587 = 1;
			}
		}
	}
	if (func_44() && Global_4269587 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0xE3903F59E2F22150();
	}
	fVar3 = func_102((unk_0xBBDA792448DB5A89((unk_0xE3903F59E2F22150() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = unk_0x0BADBFA3B172435F((fVar3 * 90f));
		}
		Global_14481 = { func_101(Param0, Param3, fVar4) };
		Global_14484 = { func_101(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14481 = { Param3 };
		Global_14484 = { Param9 };
	}
	unk_0x727F454F1D40BAE4(Global_14481);
	unk_0x25E480E1B3CEE87C(Global_14484, 0);
	return fVar3;
}

Vector3 func_101(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_102(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_103()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if ((unk_0xA30F14B621E3269D() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		unk_0xD92171BC6C48DB90(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(1);
		Global_15866 = 6;
		return;
	}
}

bool func_104()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_105(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_106(sParam2, iParam3, 0);
}

int func_106(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					unk_0xD92171BC6C48DB90(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_103();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x12BF789190D82474())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_33();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			unk_0xCE689A8E8C42ED78(&Global_2423, 20);
			unk_0xCE689A8E8C42ED78(&Global_2424, 17);
			unk_0xCE689A8E8C42ED78(&Global_2425, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x735057E6A0704A43(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0x63E238348058FF52(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
					if (unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x0E4018692D92041D(Global_2423, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_48();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_103();
	}
	return 0;
}

int func_107()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x818901B332D5541D();
}

