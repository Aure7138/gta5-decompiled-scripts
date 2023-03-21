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
	unk_0xC1A27D367CCA8C15();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFA30DFD0084E92FE(Global_2364, 1))
		{
			if (!unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				if (unk_0x58E7DDFF8D17A82A())
				{
					if (Global_14481)
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14436)
						{
							func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x7CB6FD92BE491AD9(&Global_2364, 1);
				}
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_14666, 0))
		{
			if (!func_105())
			{
				if (!unk_0xFA30DFD0084E92FE(Global_14666, 1))
				{
					unk_0xF0059F27F7BB6680(&Global_14666, 1);
					if (unk_0x7AF0088ABFA713B6())
					{
						uLocal_106 = unk_0xED678C85A82F0AB9();
					}
					else
					{
						iLocal_102 = unk_0x105601648511CC64();
					}
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					iLocal_108 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0x105601648511CC64();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_103(&Global_15254, &Global_15870, &Global_15790, Global_15803, Global_16785, Global_16786, 0))
					{
						Global_14666 = 0;
					}
				}
				else
				{
					Global_14666 = 0;
				}
			}
		}
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0xFA30DFD0084E92FE(Global_4456448.f_17, 4))
		{
			if (Global_15800 != 0)
			{
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					func_102();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_98();
		}
		switch (Global_15800)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15806)
				{
					if (Global_15796 == 0)
					{
						func_96();
					}
					else
					{
						func_95();
						func_96();
					}
				}
				else if (Global_15796 == 0)
				{
					func_85();
				}
				else
				{
					func_95();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_15806)
				{
					if (Global_15808)
					{
						func_56();
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
	Global_15810 = 0;
	Global_14492 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15811 = 0;
	Global_15812 = 0;
	Global_15813 = 0;
	Global_15814 = 0;
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
	Global_15804 = 0;
	Global_15805 = 0;
	Global_15847 = 0;
	Global_15848 = 0;
	Global_15851 = 0;
	Global_15853 = 0;
	Global_15852 = 0;
	Global_15855 = 0;
	Global_15854 = 0;
	Global_16817 = 0;
	Global_15857 = 0;
	if (Global_14493.f_1 == 10)
	{
	}
	else if (unk_0xFA30DFD0084E92FE(Global_2363, 11))
	{
		func_3();
	}
	Global_15806 = 0;
	Global_15807 = 0;
	Global_15808 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16790 = 0;
	Global_16797 = 0;
	Global_16796 = 0;
	Global_16793 = 0;
	Global_16792 = 0;
	Global_16794 = 0;
	Global_16795 = 0;
	Global_15796 = 0;
	Global_15797 = 0;
	Global_15798 = 0;
	Global_15799 = 0;
	Global_16058 = 0;
	Global_16821 = 5000;
	Global_14476 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
	unk_0x7CB6FD92BE491AD9(&Global_2363, 24);
	unk_0x7CB6FD92BE491AD9(&Global_2364, 23);
	unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
	unk_0x7CB6FD92BE491AD9(&Global_2364, 9);
	unk_0x7CB6FD92BE491AD9(&Global_2364, 31);
	unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
	unk_0x7CB6FD92BE491AD9(&Global_2365, 5);
	Global_16784 = 0;
	Global_16783 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		Global_15800 = 4;
	}
	else
	{
		Global_15800 = 0;
		Global_16811 = 0;
		Global_16822 = unk_0x105601648511CC64();
	}
}

void func_3()
{
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 11))
			{
				if (!Global_14436)
				{
					unk_0x419DE08DC356F2FD(unk_0xBC25C936A095B5BA(), 0, 1);
				}
				if (Global_70978)
				{
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 244, 1);
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 243, 1);
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 242, 1);
				}
				unk_0x7CB6FD92BE491AD9(&Global_2363, 11);
			}
		}
	}
}

void func_4()
{
	Global_15810 = 0;
	Global_14492 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
		{
			if (Global_15856 == 0)
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
	if (Global_16792 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16811 == 1)
			{
				unk_0xF0734ED8398D268C(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16811 == 0)
		{
			unk_0x5C7DC611411E2CF9();
			iLocal_31 = 0;
		}
	}
	else if (Global_16794 > 0)
	{
		iLocal_37 = unk_0x105601648511CC64();
		if ((iLocal_37 - iLocal_36) > Global_16794)
		{
			unk_0xD02C58A9649E4D42();
			Global_16792 = 0;
		}
	}
	if (Global_16811 == 0)
	{
		if (!unk_0xE6711F601F11B66B())
		{
			Global_15800 = 6;
		}
	}
}

void func_6()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x58E7DDFF8D17A82A())
	{
		if (!unk_0xFA30DFD0084E92FE(Global_2363, 11))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (Global_70978 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
			{
				if (Global_70978 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_70978 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16811 == 1)
		{
			if (Global_16812 == 1)
			{
				unk_0xF0734ED8398D268C(1);
				iLocal_31 = 1;
				Global_16812 = 0;
			}
		}
	}
	else if (Global_16811 == 0)
	{
		if (Global_16812 == 1)
		{
			unk_0x5C7DC611411E2CF9();
			iLocal_31 = 0;
			Global_16812 = 0;
		}
	}
	if (Global_15853 == 0)
	{
		if (!Global_15813)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_2364, 31))
			{
				if (!unk_0xFA30DFD0084E92FE(Global_2364, 27))
				{
					if (func_49())
					{
						if (Global_14493.f_1 > 6)
						{
							unk_0xF0059F27F7BB6680(&Global_2364, 24);
							unk_0xF0059F27F7BB6680(&Global_2364, 27);
							unk_0x7CB6FD92BE491AD9(&Global_2364, 26);
							unk_0x7CB6FD92BE491AD9(&Global_2364, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x58E7DDFF8D17A82A() == 0 && Global_15813 == 0)
	{
		if (Global_15853 == 1)
		{
			unk_0xF0059F27F7BB6680(&Global_2364, 23);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&Global_2364, 23);
		}
		if (Global_15857)
		{
			if (Global_15853 == 0)
			{
				Global_15419 = { Global_15858 };
				Global_15876 = { Global_15864 };
				Global_15810 = 0;
				Global_16817 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15855)
		{
			while (Global_15853 == 1)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14493.f_1 < 6)
				{
					Global_15853 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15855)
						{
							iLocal_30 = 1;
							Global_16815 = 1;
							func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15942, &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
							func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14481)
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xF0059F27F7BB6680(&Global_2363, 17);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xF0059F27F7BB6680(&Global_2363, 17);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16813 = 1;
							if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
							{
								func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15942, "CELL_300", &(Global_117[Global_1678 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15942, &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
								func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14481)
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
						}
					}
					if (func_45(2, Global_14462, 0))
					{
						func_43();
						Global_14419 = 0.19f;
						Global_15853 = 0;
						func_41();
						if (Global_15855)
						{
							Global_15419 = { Global_15936 };
							Global_16817 = 5;
						}
						else if (Global_15798 > 0)
						{
							Global_16058 = 1;
							Global_15800 = 0;
							Global_16821 = 0;
							if (unk_0xFA30DFD0084E92FE(Global_2364, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16784 + 1)
								{
									uLocal_111[iVar0] = func_40(&(Global_16059[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_40(&(Global_16421[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16784, &Global_15089, Global_1678, &Global_15876, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15798 == 2)
							{
								func_22(&Global_15089, Global_1678, &Global_15876, &(Global_15954[0 /*6*/]), &(Global_16006[0 /*6*/]), &(Global_15954[1 /*6*/]), &(Global_16006[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16817 = 1;
							Global_16813 = 0;
							Global_16815 = 0;
							Global_15810 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15419 = { Global_15894 };
							Global_16817 = 1;
						}
						Global_16813 = 0;
						Global_16815 = 0;
						Global_15810 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14463, 0) || unk_0xFA30DFD0084E92FE(Global_2363, 24))
					{
						func_43();
						Global_14419 = 0.19f;
						Global_15853 = 0;
						func_41();
						if (Global_15855)
						{
							Global_15419 = { Global_15930 };
							Global_16817 = 4;
						}
						else if (Global_15798 > 0)
						{
							Global_16058 = 1;
							Global_15800 = 0;
							Global_16821 = 0;
							if (unk_0xFA30DFD0084E92FE(Global_2364, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16783 + 1)
								{
									uLocal_173[iVar1] = func_40(&(Global_16240[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_40(&(Global_16602[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16783, &Global_15089, Global_1678, &Global_15876, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15798 == 2)
							{
								func_22(&Global_15089, Global_1678, &Global_15876, &(Global_15967[0 /*6*/]), &(Global_16019[0 /*6*/]), &(Global_15967[1 /*6*/]), &(Global_16019[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16817 = 2;
							Global_16813 = 0;
							Global_16815 = 0;
							Global_15810 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15419 = { Global_15900 };
							Global_16817 = 2;
						}
						Global_16813 = 0;
						Global_16815 = 0;
						Global_15810 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14465, 0))
					{
						if (Global_15855)
						{
							Global_14419 = 0.19f;
							Global_15853 = 0;
							func_41();
							func_43();
							Global_15419 = { Global_15924 };
							Global_16817 = 3;
							Global_16813 = 0;
							Global_16815 = 0;
							Global_15810 = 0;
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
			while (Global_15853)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14493.f_1 < 6)
				{
					Global_15853 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14474, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14474, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14481)
						{
							func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14462, 0))
					{
						func_43();
						Global_15853 = 0;
						func_41();
						unk_0x29CD142125FE177B(Global_14474, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0xC27A95D32A8160C0();
						while (!unk_0x3B6BD69AB08B86C2(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0x6AE1427A38313694(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_15419 = { Global_15930 };
								Global_16817 = 4;
								break;
							
							case 1:
								Global_15419 = { Global_15924 };
								Global_16817 = 3;
								break;
							
							case 2:
								Global_15419 = { Global_15936 };
								Global_16817 = 5;
								break;
						}
						Global_16813 = 0;
						Global_16815 = 0;
						Global_15810 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14463, 0))
					{
						Global_15853 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15801 == 0)
		{
			unk_0x1E08809A5041F85B(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_14493.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_15800 = 6;
		}
		unk_0xC4BA30B532FE260F(-1, "Hang_Up", &Global_14482, 1);
		func_13();
		Global_14493.f_1 = Global_14495;
		func_8();
	}
	else if (Global_14659 == 0)
	{
		if (func_45(2, Global_14461, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
					{
					}
					else
					{
						Global_14471 = 1;
						func_41();
						unk_0x1E08809A5041F85B(0);
						Global_15849 = 1;
						Global_15850 = 1;
						Global_15800 = 6;
						func_13();
						Global_14493.f_1 = Global_14495;
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
	
	if (Global_14476 == 1)
	{
		return;
	}
	if (Global_14493.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA7F138B5B1AB2CF6(Global_14474))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14493.f_1)
	{
		case 6:
			func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2968);
			if (Global_2968 == 1)
			{
				func_46(Global_14474, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14497), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14497;
			}
			else
			{
				func_46(Global_14474, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14498), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14498;
			}
			if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14661 == 0)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			}
			else if (Global_70978)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			}
			else
			{
				if (Global_14660 == 1)
				{
					if (Global_14481)
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14481)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_2363, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14492 == 1)
			{
				func_10();
				func_46(Global_14474, "SET_THEME", unk_0xBBDA792448DB5A89(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15813)
				{
					unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_15815);
					unk_0x64989E60CF560CA1();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
				{
					func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), "CELL_217", &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
				}
				func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15800 == 4 || Global_15800 == 3)
			{
				func_46(Global_14474, "SET_THEME", unk_0xBBDA792448DB5A89(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15813)
				{
					unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_15815);
					unk_0x64989E60CF560CA1();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					if (Global_16058)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
					{
						func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &Var0, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_10()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_14493 == 0)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 1)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 2)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 3)
		{
			switch (Global_4267678)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
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
	
	Global_16868 = 0;
	Global_2968 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2932[iVar0] = 0;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 3))
								{
									iVar2 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14663 = 0;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_2457694)
							{
								if (iVar1 == 14)
								{
									func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2932[iVar0] = 1;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_105220.f_14112[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_105220.f_14112[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_105220.f_14112[iVar3 /*104*/].f_99[Global_14493] == 1)
											{
												Global_16868++;
											}
										}
									}
									iVar3++;
								}
								func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16868), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70978)
								{
									iVar4 = 0;
									iVar4 = Global_4266200;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4266201[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4266201[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4266201[iVar5 /*104*/].f_99[Global_14493] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14493)
									{
										case 0:
											iVar6 = Global_37062;
											break;
										
										case 1:
											iVar6 = Global_37063;
											break;
										
										case 2:
											iVar6 = Global_37064;
											break;
										
										default:
											break;
									}
									func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(Global_2369);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar7);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 3))
								{
									iVar8 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14663 = 0;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar8);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 8)
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if ((iVar1 == 23 && unk_0x3362CDE8460ED38B(&(Global_2370[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xFA30DFD0084E92FE(Global_2364, 6))
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_2370[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622819.f_1;
								func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2932[iVar0] = 1;
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
	return Global_35905 == iParam0;
}

void func_13()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return;
	}
	switch (Global_14495)
	{
		case 5:
			Global_14495 = 6;
			break;
		
		case 6:
			if (unk_0xFA30DFD0084E92FE(Global_2364, 5))
			{
				Global_14495 = 6;
				unk_0x7CB6FD92BE491AD9(&Global_2364, 5);
			}
			else
			{
				Global_14495 = 3;
			}
			break;
		
		case 7:
			Global_14495 = 3;
			break;
		
		case 3:
			if (unk_0xFA30DFD0084E92FE(Global_2364, 5))
			{
				Global_14495 = 6;
				unk_0x7CB6FD92BE491AD9(&Global_2364, 5);
			}
			else
			{
				Global_14495 = 3;
			}
			break;
		
		default:
			Global_14495 = 3;
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
		if (func_45(2, Global_14469, 0) || unk_0x694514BD37EC4E94(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_45(2, Global_14470, 0) || unk_0x694514BD37EC4E94(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	func_46(Global_14474, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_14664 == 0)
		{
			unk_0x32A023E2F8F8566C(2);
		}
		else
		{
			unk_0x32A023E2F8F8566C(1);
		}
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267680 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_46(Global_14474, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_14664 == 0)
		{
			unk_0x32A023E2F8F8566C(1);
		}
		else
		{
			unk_0x32A023E2F8F8566C(2);
		}
	}
}

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_21()
{
	if (unk_0xA7F138B5B1AB2CF6(Global_14474))
	{
		if (Global_14492 == 1)
		{
			if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15847)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
		}
		else
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
		Global_15812 = 1;
	}
	else
	{
		Global_15812 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam2 > Global_15802)
			{
				if (bParam3 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
				}
				else
				{
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_33();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16796 = Global_16797;
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15419.f_370 = Global_16789;
		Global_15796 = Global_15797;
		Global_15798 = Global_15799;
		if (Global_16058 == 0)
		{
			Global_15954[0 /*6*/] = { Global_15980[0 /*6*/] };
			Global_15954[1 /*6*/] = { Global_15980[1 /*6*/] };
			Global_16006[0 /*6*/] = { Global_16032[0 /*6*/] };
			Global_16006[1 /*6*/] = { Global_16032[1 /*6*/] };
			Global_15967[0 /*6*/] = { Global_15993[0 /*6*/] };
			Global_15967[1 /*6*/] = { Global_15993[1 /*6*/] };
			Global_16019[0 /*6*/] = { Global_16045[0 /*6*/] };
			Global_16019[1 /*6*/] = { Global_16045[1 /*6*/] };
		}
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (Global_16058 == 0)
					{
						if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
						{
							return 0;
						}
						if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
						{
							return 0;
						}
						if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
						{
							return 0;
						}
						if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
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
				switch (Global_14493.f_1)
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
			Global_15810 = bParam3;
		}
		Global_15802 = iParam2;
		if (Global_15796 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15796)
			{
				StringCopy(&(Global_15419.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15419.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14666 = 0;
		func_48();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15802 || iParam2 == Global_15802)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

void func_24()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_25()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_28();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_29()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_32(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_31(unk_0xBC25C936A095B5BA());
			if (func_30(iVar0) && (!func_12(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_30(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(uParam0);
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
		return Global_105220.f_28021[iParam0 /*29*/];
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
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
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
	Global_15797 = uParam0;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15848 = 0;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_15814 = 0;
	Global_16797 = 0;
	Global_15805 = 0;
	Global_15852 = 0;
	Global_15854 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15812 = 1;
	}
	else
	{
		Global_15812 = 0;
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
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_14482, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!Global_14436)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_2363, 11))
					{
						func_54();
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
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			if (Global_14436 == 0)
			{
				if (Global_1678 != 128)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (Global_15800 != 2)
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
		if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x98A60DA6C3008698())
			{
				if (unk_0x149E9368A11035DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA()) || unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA())) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x6BA46D5172404F26(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		if (Global_104268)
		{
			return 0;
		}
	}
	if (Global_70978)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x98A60DA6C3008698()))
	{
		iVar2 = 1;
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				uVar3 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if ((((((((unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(uVar3)) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(uVar3))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(uVar3))) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("seashark")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("seashark2")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("rhino")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("submersible")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("submersible2")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267680 || iVar2 == 1)
	{
		if (unk_0xB731B8C5BCE89836(joaat("apptrackify")) > 0 || Global_105220.f_14022.f_89)
		{
			if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
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
	if (unk_0x694514BD37EC4E94(iParam0, uParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, iParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
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
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_47()
{
	if (func_44())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!Global_14436)
				{
					if (unk_0xFA30DFD0084E92FE(Global_2363, 11))
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
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

int func_49()
{
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_108 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0x105601648511CC64();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (Global_14659)
	{
		func_51(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_25())
	{
		Global_14493.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	if (func_45(2, Global_14470, 0))
	{
		if (Global_16811 == 0)
		{
			if (Global_15806)
			{
				if (unk_0xFA30DFD0084E92FE(Global_2364, 17))
				{
				}
				else
				{
					unk_0xD30A170FFB82E713();
				}
			}
		}
	}
}

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_55() && unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && iVar1 == 0)
		{
			iVar2 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 0);
			if (Global_70978)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = 1;
			}
			if (!Global_14436)
			{
				if (Global_1678 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
							}
							else
							{
								if (Global_70978)
								{
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 244, 0);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 243, 0);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 242, 0);
								}
								unk_0xF0059F27F7BB6680(&Global_2363, 11);
								unk_0x419DE08DC356F2FD(unk_0xBC25C936A095B5BA(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_55()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	if (Global_70978 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16813 = 1;
		if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
		{
			func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15942, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15942, &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
			func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14419 = 0.2f;
		if (Global_14481)
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
	}
	if (Global_15853 == 1)
	{
		if (Global_14493.f_1 < 6)
		{
			Global_15853 = 0;
		}
		else
		{
			if (Global_14433 == 0)
			{
				if (func_45(2, Global_14462, 0))
				{
					Global_14419 = 0.19f;
					Global_15853 = 0;
					func_41();
					Global_16818 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14463, 0))
			{
				Global_14419 = 0.19f;
				Global_15853 = 0;
				func_41();
				Global_16818 = 2;
			}
		}
	}
	else if (Global_16818 == 2)
	{
		if (Global_15801 == 0)
		{
			unk_0x1E08809A5041F85B(0);
			Global_15800 = 6;
		}
		func_13();
		Global_14493.f_1 = Global_14495;
		func_8();
	}
	else if (!unk_0x58E7DDFF8D17A82A())
	{
		iLocal_32 = 0;
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		unk_0xC4BA30B532FE260F(-1, "Hang_Up", &Global_14482, 1);
		func_13();
		Global_14493.f_1 = Global_14495;
		func_8();
	}
}

void func_57()
{
	if (Global_14667 == 1)
	{
		if (unk_0x58E7DDFF8D17A82A())
		{
			if (unk_0xC95D751980F5BA7C())
			{
				Global_14667 = 0;
			}
		}
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			Global_14667 = 0;
			unk_0x1E08809A5041F85B(0);
			Global_15800 = 6;
		}
	}
	if (unk_0xC9D9444186B5A374() > iLocal_35)
	{
		if (Global_14667 == 1)
		{
			Global_14667 = 0;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() < Global_16821 || Global_14667 == 1)
	{
		if (func_45(2, Global_14461, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
					{
					}
					else
					{
						Global_14471 = 1;
						func_41();
						unk_0x1E08809A5041F85B(0);
						Global_15849 = 1;
						Global_15800 = 6;
						unk_0x7CB6FD92BE491AD9(&Global_2363, 27);
						if (!Global_15811)
						{
							unk_0xF0059F27F7BB6680(&Global_2364, 5);
						}
						func_13();
						Global_14493.f_1 = Global_14495;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 27);
		Global_15800 = 4;
		Global_15857 = 0;
		func_60();
		func_59();
		if (!Global_15813)
		{
			if (Global_16817 == 0)
			{
				if (!unk_0xFA30DFD0084E92FE(Global_2365, 5))
				{
					unk_0xD02C58A9649E4D42();
				}
				unk_0x7CB6FD92BE491AD9(&Global_2365, 5);
			}
			else
			{
				unk_0x088FD8DB51CCF3E9(Global_15419.f_368, Global_15419.f_369);
			}
		}
		func_58();
	}
}

void func_58()
{
	if (unk_0x7AF0088ABFA713B6())
	{
		uLocal_107 = unk_0xED678C85A82F0AB9();
	}
	else
	{
		iLocal_104 = unk_0x105601648511CC64();
	}
}

void func_59()
{
	if (Global_15813)
	{
		if (Global_70978)
		{
			if (unk_0xA7F138B5B1AB2CF6(Global_14474))
			{
				if (!unk_0x8ACB0C3FACC09467())
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&(Global_2519572.f_1721), 15);
				}
			}
		}
	}
}

void func_60()
{
	if (unk_0xA7F138B5B1AB2CF6(Global_14474))
	{
		if (!Global_15808)
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15813)
			{
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(4);
				unk_0x1E1FB49121565EB6(0);
				unk_0x1E1FB49121565EB6(2);
				unk_0x57016C44F10111F0("CELL_CONDFON");
				unk_0x607C19B90D297FE2(&Global_15815);
				unk_0x64989E60CF560CA1();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0xF9FBC2F3F73D94C9();
			}
			else if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
			{
				func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_106(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), "CELL_219", &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()
{
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_109 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), uLocal_95);
		iLocal_110 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0x105601648511CC64();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0x105601648511CC64();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_15847 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
				{
					if (unk_0xA7F138B5B1AB2CF6(Global_14474))
					{
						func_41();
						Global_14492 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
			{
				if (unk_0xA7F138B5B1AB2CF6(Global_14474))
				{
					func_41();
					Global_14492 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_14492 = 3;
	}
	if (Global_14492 == 2)
	{
		iLocal_30 = 0;
		Global_15800 = 4;
		func_54();
		Global_15857 = 0;
		func_60();
		func_59();
		if (!Global_15813)
		{
			if (Global_16817 == 0)
			{
				unk_0xD02C58A9649E4D42();
			}
			else
			{
				unk_0x088FD8DB51CCF3E9(Global_15419.f_368, Global_15419.f_369);
			}
		}
		func_58();
		Global_16816 = 0;
	}
	if (Global_15847 == 0)
	{
		if (Global_14492 == 3)
		{
			if (Global_15813)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_16816 = 1;
				unk_0x1E08809A5041F85B(0);
				Global_15800 = 6;
				func_13();
				Global_14493.f_1 = Global_14495;
				func_8();
			}
		}
	}
	else if (Global_14492 == 3)
	{
	}
}

void func_62()
{
}

void func_63()
{
	Global_2525748.f_2 = 1;
	Global_2525748.f_38 = 1;
	if (unk_0x57D316754A262B34())
	{
		if (unk_0x5F1FADF056F1CC85())
		{
			while (unk_0x95FD43CFE24C9F0D())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x20405E3A95992098();
			Global_2525748 = 0;
			Global_2525748.f_2 = 0;
		}
		else if (func_66(Global_2525748.f_20))
		{
			if (unk_0xE140B7178EA00705(&(Global_2525748.f_20)))
			{
				if (!unk_0xCB39420213F43498(&(Global_2525748.f_20)))
				{
					func_64();
				}
			}
		}
		else
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
	if (Global_2525748.f_37)
	{
		func_50(0);
	}
	Global_2525748.f_37 = 0;
	Global_2525748.f_3 = 0;
}

void func_64()
{
	Global_2525748.f_1 = 0;
	Global_2525748 = 0;
	Global_2525748.f_2 = 0;
	Global_2525748.f_33 = -1;
	Global_2525748.f_34 = -1;
	StringCopy(&(Global_2525748.f_4), "", 64);
	StringCopy(&(Global_2525748.f_39[0 /*16*/]), "", 64);
	Global_2525748.f_38 = 0;
	Global_2525748.f_56 = 0;
	Global_2525748.f_57 = 0;
	Global_2525748.f_58 = -2;
	Global_2525748.f_3 = 0;
	func_65(&(Global_2525748.f_20));
}

void func_65(var uParam0)
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

bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

void func_67()
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
	while (iLocal_92 < Global_15796)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_15419.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_14668[iVar2 /*6*/] = { Global_15419.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_14668[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14668[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14668[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x0F6F4C227FB5DD52(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0xFCB4C1AC11347344(&cLocal_38), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (unk_0x0F6F4C227FB5DD52(&(Global_14668[iVar2 /*6*/])))
				{
					if (unk_0x3362CDE8460ED38B(&(Global_14668[iVar2 /*6*/]), &(Global_15419.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x988232D5807088FE(iVar3, &cLocal_50, &(Global_14668[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x0F6F4C227FB5DD52(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xFCB4C1AC11347344(&cLocal_44), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				unk_0x988232D5807088FE(iVar3, &cLocal_50, &(Global_15419.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14668[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14668[iVar2 /*6*/]), "END", 24);
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
	if (Global_15806 == 0)
	{
		unk_0x556DA903E57B4606(uLocal_83);
		unk_0x21B86EB78E50ACC7(uLocal_84);
		unk_0x038A0E27FFB3417F(Global_15419.f_368, Global_15419.f_369, Global_15419.f_370, uLocal_82);
		Global_15800 = 4;
	}
}

int func_68(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x3362CDE8460ED38B(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x3362CDE8460ED38B(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x3362CDE8460ED38B(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x3362CDE8460ED38B(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 2, 3);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 1, 2);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 0, 1);
	if (unk_0x3362CDE8460ED38B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(uVar0);
}

int func_79(var uParam0)
{
	if (unk_0x3362CDE8460ED38B(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x3362CDE8460ED38B(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(uVar0);
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(uVar0);
}

void func_82()
{
	cLocal_85 = { Global_15419.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_85))
	{
		sLocal_91 = unk_0xFCB4C1AC11347344(&cLocal_85);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_91))
		{
		}
	}
}

void func_83()
{
	cLocal_73 = { Global_15419.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_73))
	{
		sLocal_79 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 0, 1);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_79))
		{
		}
		sLocal_80 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 1, 2);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_80))
		{
		}
		sLocal_81 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 2, 3);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_81))
		{
		}
	}
}

void func_84()
{
	cLocal_66 = { Global_15419.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_66))
	{
		sLocal_72 = unk_0xFCB4C1AC11347344(&cLocal_66);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_72))
		{
		}
	}
}

void func_85()
{
	func_86();
	unk_0x556DA903E57B4606(uLocal_83);
	unk_0x21B86EB78E50ACC7(uLocal_84);
	if (Global_16792)
	{
		unk_0x21EB93E5B84AED94(Global_15419.f_368, Global_15419.f_369, Global_15419.f_370, uLocal_82);
		iLocal_36 = unk_0x105601648511CC64();
	}
	else
	{
		unk_0x038A0E27FFB3417F(Global_15419.f_368, Global_15419.f_369, Global_15419.f_370, uLocal_82);
	}
	Global_15800 = 4;
}

void func_86()
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
	if (unk_0x4B5358191700A331(&Global_15876))
	{
		if (unk_0x3362CDE8460ED38B(&Global_15876, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0xF7E138CFA19B55E7() || unk_0xF49912B78E2591B6())
		{
			if (Global_1573346 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_70978 || func_94())
		{
			if (Global_1573346 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_92())
		{
			iVar14 = 1;
		}
		if (func_91(unk_0x56BEECB328B6D29D(&Global_15876)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15802 < 5 || Global_15802 == 10) || Global_15802 == 12) || Global_15802 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0x900CF084251DED26(&Global_15876, 7);
				while (!unk_0xFA9040D29FE330BD(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0xBF8DAF77B7A8FB64(&Global_15876, 15);
				while (!unk_0xFA9040D29FE330BD(15))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0x900CF084251DED26(&Global_15876, 6);
			while (!unk_0xFA9040D29FE330BD(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xBF8DAF77B7A8FB64(&Global_15876, 14);
			while (!unk_0xFA9040D29FE330BD(14))
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
	unk_0xF2A88AFA53BCE21D();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16810 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_15419 };
		StringConCat(&cLocal_44, "A", 24);
		Global_14668[iVar2 /*6*/] = { Global_15419 };
		StringConCat(&(Global_14668[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14668[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14668[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x0F6F4C227FB5DD52(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0xFCB4C1AC11347344(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4267654 == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_82 = func_77();
			uLocal_83 = func_76();
			uLocal_84 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (unk_0x0F6F4C227FB5DD52(&(Global_14668[iVar2 /*6*/])))
			{
				if (Global_16790 == 0 && Global_16796 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x988232D5807088FE(iVar3, &cLocal_50, &(Global_14668[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x3362CDE8460ED38B(&(Global_14668[iVar2 /*6*/]), &Global_16798))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x988232D5807088FE(iVar3, &cLocal_50, &(Global_14668[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16810 = iVar2;
					if (Global_16796 == 1)
					{
						Global_16796 = 0;
					}
				}
			}
			else if (Global_16796 == 0 && Global_16790 == 0)
			{
				unk_0x988232D5807088FE(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x0F6F4C227FB5DD52(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xFCB4C1AC11347344(&cLocal_44), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				unk_0x988232D5807088FE(iVar3, &cLocal_50, &Global_15419, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15089[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0x724D816EA203A79E(Global_15089[iVar0 /*10*/]) || Global_15089[iVar0 /*10*/] == 0)
			{
				unk_0x62D34DDE4E0EDE85(iVar0, Global_15089[iVar0 /*10*/], &(Global_15089[iVar0 /*10*/].f_1));
			}
			if (Global_15089.f_161 == iVar0)
			{
				if ((Global_15089.f_162 != 0f && Global_15089.f_162.f_1 != 0f) && Global_15089.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0xDFBFB0F37A2592B2(Global_15089.f_161, Global_15089.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4267654 == 1)
	{
		Global_4267654 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4267473[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x724D816EA203A79E(Global_4267473[iVar0 /*9*/]) || Global_4267473[iVar0 /*9*/] == 0)
				{
					unk_0x62D34DDE4E0EDE85(Global_4267473[iVar0 /*9*/].f_8, Global_4267473[iVar0 /*9*/], &(Global_4267473[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()
{
	cLocal_85 = { Global_15419 };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_85))
	{
		sLocal_91 = unk_0xFCB4C1AC11347344(&cLocal_85);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_91))
		{
		}
	}
}

void func_89()
{
	cLocal_73 = { Global_15419 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_73))
	{
		sLocal_79 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 0, 1);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_79))
		{
		}
		sLocal_80 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 1, 2);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_80))
		{
		}
		sLocal_81 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_73), 2, 3);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_81))
		{
		}
	}
}

void func_90()
{
	cLocal_66 = { Global_15419 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_66))
	{
		sLocal_72 = unk_0xFCB4C1AC11347344(&cLocal_66);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_72))
		{
		}
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
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
			return 1;
		
		default:
	}
	return 0;
}

int func_92()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_93(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_93(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

var func_94()
{
	return Global_1312831;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xF7E138CFA19B55E7() || unk_0xF49912B78E2591B6())
	{
		if (Global_1573346 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_70978)
	{
		if (Global_1573346 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_92())
	{
		iVar1 = 1;
	}
	if (unk_0x4B5358191700A331(&Global_15876))
	{
		if (unk_0x3362CDE8460ED38B(&Global_15876, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_91(unk_0x56BEECB328B6D29D(&Global_15876)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15802 < 5 || Global_15802 == 10) || Global_15802 == 12) || Global_15802 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0x900CF084251DED26(&Global_15876, 7);
			while (!unk_0xFA9040D29FE330BD(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xBF8DAF77B7A8FB64(&Global_15876, 15);
			while (!unk_0xFA9040D29FE330BD(15))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0x900CF084251DED26(&Global_15876, 6);
		while (!unk_0xFA9040D29FE330BD(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0xBF8DAF77B7A8FB64(&Global_15876, 14);
		while (!unk_0xFA9040D29FE330BD(14))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0xF2A88AFA53BCE21D();
	func_87();
}

void func_96()
{
	while (Global_14476 == 1 && unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_14476 = 0;
	if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2364, 1);
	}
	Global_14477 = 0;
	if (Global_15796 == 0)
	{
		if (!Global_15813)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14667 = 0;
	if (Global_15810)
	{
		if (Global_16817 == 0)
		{
			if (Global_15813 == 0)
			{
				iLocal_34 = 5000;
				unk_0x6AA5D911E367FF71(Global_15419.f_368, Global_15419.f_369);
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
		Global_14667 = 1;
		unk_0x5AE11BC36633DE4E(0);
		while ((Global_14667 == 1 && Global_15800 == 1) && unk_0xC9D9444186B5A374() < iLocal_34)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				Global_14667 = 0;
				unk_0x1E08809A5041F85B(0);
				Global_15800 = 6;
			}
			if (unk_0x58E7DDFF8D17A82A())
			{
				if (unk_0xC95D751980F5BA7C())
				{
					Global_14667 = 0;
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > iLocal_34)
		{
		}
		if (Global_15800 != 1)
		{
		}
		if (Global_14667 == 0)
		{
		}
	}
	Global_14667 = 0;
	if (((Global_14493.f_1 == 1 || Global_14493.f_1 == 0) || Global_15800 != 1) || Global_14459 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
	else
	{
		if (Global_15808)
		{
			Global_16818 = 0;
			iLocal_32 = 0;
		}
		if (Global_15810 == 0)
		{
			if (Global_15851 == 0)
			{
				Global_14495 = Global_14493.f_1;
				Global_15851 = 1;
			}
			iLocal_30 = 0;
			if (Global_16817 == 0)
			{
				unk_0x6AA5D911E367FF71(Global_15419.f_368, Global_15419.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_15800 = 3;
				Global_14667 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0xF0059F27F7BB6680(&Global_2363, 27);
				unk_0xC1B1E9A034A63A62(0);
			}
			else
			{
				Global_14667 = 0;
				Global_15800 = 4;
			}
			Global_14492 = 0;
			if (Global_15811 == 1)
			{
				if (Global_14493.f_1 == 10)
				{
				}
				if (!Global_14493.f_1 == 9)
				{
					if (Global_14493.f_1 > 4)
					{
						if (Global_14476 == 0)
						{
							Global_14493.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14493.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14493.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (Global_14667 == 1)
					{
						if (unk_0x58E7DDFF8D17A82A())
						{
							if (unk_0xC95D751980F5BA7C())
							{
								Global_14667 = 0;
							}
						}
					}
				}
				if (Global_14493.f_1 == 6)
				{
				}
				if (Global_14493.f_1 == 10)
				{
				}
				if (Global_14493.f_1 == 3)
				{
					unk_0x1E08809A5041F85B(0);
					Global_15800 = 6;
					Global_14477 = 1;
					return;
				}
				Global_14493.f_1 = 9;
				func_8();
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				uLocal_101 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				iLocal_99 = unk_0x105601648511CC64();
			}
			while (Global_14493.f_1 != 9 && Global_14476 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14667 == 1)
				{
					if (unk_0x58E7DDFF8D17A82A())
					{
						if (unk_0xC95D751980F5BA7C())
						{
							Global_14667 = 0;
						}
					}
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					iLocal_108 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x105601648511CC64();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16816 = 1;
						Global_14476 = 1;
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Global_2363, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_14476 == 0)
			{
				if (!Global_16817 == 0)
				{
					Global_15857 = 0;
					func_60();
					func_59();
					if (!Global_15813)
					{
						if (Global_16817 == 0)
						{
							unk_0xD02C58A9649E4D42();
						}
						else
						{
							unk_0x088FD8DB51CCF3E9(Global_15419.f_368, Global_15419.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				func_97();
				Global_14477 = 1;
			}
		}
		else
		{
			Global_14492 = 1;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (Global_14493.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x7CB6FD92BE491AD9(&Global_2364, 21);
				}
			}
			if (Global_15851 == 0)
			{
				Global_14495 = Global_14493.f_1;
				Global_15851 = 1;
			}
			if (Global_14493.f_1 == 3)
			{
				Global_14493.f_1 = 4;
			}
			else
			{
				while (Global_14493.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (Global_14493.f_1 == 6)
				{
				}
				Global_14493.f_1 = 9;
				func_8();
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				uLocal_101 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				iLocal_99 = unk_0x105601648511CC64();
			}
			while (Global_14493.f_1 != 9 && Global_14476 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x7AF0088ABFA713B6())
				{
					iLocal_108 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x105601648511CC64();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16816 = 1;
						Global_14476 = 1;
						unk_0x7CB6FD92BE491AD9(&Global_2364, 21);
					}
				}
			}
			if (Global_14476 == 0)
			{
				Global_15800 = 2;
			}
			else
			{
				func_97();
				Global_14477 = 1;
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				uLocal_95 = unk_0xED678C85A82F0AB9();
				uLocal_98 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				iLocal_93 = unk_0x105601648511CC64();
				iLocal_96 = unk_0x105601648511CC64();
			}
		}
	}
}

void func_97()
{
	Global_14666 = 0;
	func_102();
}

void func_98()
{
	float fVar0;
	
	fVar0 = func_99(Global_14446[Global_14438 /*3*/], Global_14439[Global_14438 /*3*/], Global_14453, Global_14424, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16814 == 0)
		{
			unk_0x43F06392C4EF25E0(1);
		}
		iLocal_32 = 0;
	}
}

float func_99(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4267681 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2363, 14) && Global_14493.f_1 < 4)
		{
			unk_0x652515566BB40BA9(&Var0);
			if (Global_14446[Global_14438 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267681 = 1;
			}
		}
	}
	if (func_44() && Global_4267681 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x105601648511CC64();
	}
	fVar3 = func_101((unk_0xBBDA792448DB5A89((unk_0x105601648511CC64() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14421 = { func_100(Param0, Param3, fVar4) };
		Global_14424 = { func_100(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14421 = { Param3 };
		Global_14424 = { Param9 };
	}
	unk_0x3D7D94BDD4D22C14(Global_14421);
	unk_0xF960832D272B97D4(Global_14424, 0);
	return fVar3;
}

Vector3 func_100(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_101(float fParam0, float fParam1, float fParam2)
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

void func_102()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_33();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
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
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_48();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

int func_105()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xF1734B55490E9045(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xF1734B55490E9045(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xF1734B55490E9045(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xF1734B55490E9045(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

