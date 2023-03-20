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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40[4] = { 0, 0, 0, 0 };
	int iLocal_45[4] = { 0, 0, 0, 0 };
	var uLocal_50[4] = { 0, 0, 0, 0 };
	int iLocal_55[4] = { 0, 0, 0, 0 };
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
#endregion

void __EntryFunction__()
{
	struct<57> Var0;
	int iVar313;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_83 = 0.95f;
	fLocal_84 = 0.07f;
	fLocal_85 = 0.755f;
	iLocal_93 = 9999;
	unk_0x15378F974E08496E();
	Global_98873 = unk_0x48E480685981C7D4();
	func_111();
	func_110();
	func_108();
	Global_14394.f_1 = 3;
	Global_14382 = 0;
	Global_14554 = 0;
	Global_16728 = 0;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14394.f_1 > 3)
		{
			unk_0xDE1125A413AF241C(0, 337, 1);
		}
		if (iLocal_91 == 0)
		{
			if (unk_0x1C6DF6AD69BE853E())
			{
				iLocal_91 = 1;
				iLocal_93 = func_105(3425, -1, 0);
			}
		}
		else if (unk_0x1C6DF6AD69BE853E())
		{
			if (iLocal_91 == 1)
			{
				unk_0x07DBD622D9533857("gta5marketing");
				unk_0x88220CF377D67283(0, 1);
				iLocal_91 = 2;
			}
			if (iLocal_91 == 2)
			{
				iLocal_92 = unk_0x92CEF816F56725FC();
				switch (iLocal_92)
				{
					case 3:
						break;
					
					case 0:
						if (unk_0x7DB18CA8CAD5B098() > 0)
						{
							Var0.f_23 = 2;
							Var0.f_56 = 16;
							unk_0x71327E2008DDA1FC(0, &Var0);
							if (Var0.f_1 != iLocal_93)
							{
								Global_2549111 = 1;
							}
							else
							{
								Global_2549111 = 0;
							}
						}
						iLocal_91 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_2549111 = 0;
						iLocal_91 = 3;
						break;
					}
			}
		}
		else
		{
			Global_2549111 = 0;
			iLocal_91 = 0;
		}
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0xFA93A31A91EA0392())
			{
				if (Global_14394.f_1 == 6)
				{
					Global_14394.f_1 = 3;
				}
			}
		}
		if (func_104(146))
		{
			if (Global_69020 == 0)
			{
				iVar313 = func_72(0, 0, 119);
				if (iVar313 != 0)
				{
					func_70(iVar313);
				}
				else
				{
					func_69();
				}
				func_67(0);
			}
		}
		if (Global_2451473.f_4387 == 1)
		{
			if (Global_14394.f_1 > 3)
			{
				Global_14394.f_1 = 3;
			}
		}
		if (Global_69020 == 1)
		{
			if (Global_14394.f_1 == 3)
			{
				if (unk_0x236D8AD7EE179F46(Global_2550377, 15))
				{
					unk_0xF3148AAF69AF9CBC(&Global_2550377, 14);
					unk_0x4EDE34FBADD967A6(0);
					while (!func_65(3, 0, 1, 0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xC69E84EBBD7166E6(&Global_2550377, 14);
					unk_0xC69E84EBBD7166E6(&Global_2550377, 15);
				}
				if (unk_0x236D8AD7EE179F46(Global_2550377, 16))
				{
					unk_0xF3148AAF69AF9CBC(&Global_2550377, 14);
					unk_0x4EDE34FBADD967A6(0);
					while (!func_65(17, 0, 1, 0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xC69E84EBBD7166E6(&Global_2550377, 14);
					unk_0xC69E84EBBD7166E6(&Global_2550377, 16);
				}
			}
		}
		if (Global_69020 == 0)
		{
			if (unk_0x236D8AD7EE179F46(Global_2550377, 11))
			{
				if ((Global_14394.f_1 != 10 && Global_14394.f_1 != 9) || func_64() == 0)
				{
					unk_0xC69E84EBBD7166E6(&Global_2550377, 11);
					unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
				}
			}
			else if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
			{
				if (func_64())
				{
					unk_0xF3148AAF69AF9CBC(&Global_2550377, 11);
					unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
				}
			}
			if (unk_0x236D8AD7EE179F46(Global_2550377, 12))
			{
				unk_0xC69E84EBBD7166E6(&Global_2550377, 12);
				unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_2550377, 12))
		{
			if ((Global_16756 == 0 || Global_16757 == 0) && !Global_16758)
			{
				unk_0xC69E84EBBD7166E6(&Global_2550377, 12);
				unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
			}
		}
		else if (Global_16758 || (Global_16756 > 0 && Global_16757 == 1))
		{
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 12);
			unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
		}
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0xAE7350CBB88D61A5())
			{
				if (!unk_0x236D8AD7EE179F46(Global_2550377, 19))
				{
					unk_0xF3148AAF69AF9CBC(&Global_2550377, 19);
					unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
				}
			}
			else if (unk_0x236D8AD7EE179F46(Global_2550377, 19))
			{
				unk_0xC69E84EBBD7166E6(&Global_2550377, 19);
				unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
			}
		}
		if (iLocal_90 == 0)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 25))
			{
				unk_0x85C45034BA638694(joaat("sp_cellphone_sleep_time"), &iLocal_89, -1);
				iLocal_87 = unk_0x48E480685981C7D4();
				iLocal_90 = 1;
			}
		}
		else if (!unk_0x236D8AD7EE179F46(Global_2264, 25))
		{
			unk_0x85C45034BA638694(joaat("sp_cellphone_sleep_time"), &iLocal_89, -1);
			iLocal_88 = unk_0x48E480685981C7D4();
			iLocal_90 = 0;
			unk_0x123B783056E76C4E(joaat("sp_cellphone_sleep_time"), (iLocal_89 + (iLocal_88 - iLocal_87)), 1);
		}
		func_63();
		func_62();
		func_61();
		func_59();
		func_48();
		func_47();
		func_46();
		if (unk_0x236D8AD7EE179F46(Global_2265, 21))
		{
			if (!unk_0x57667F91574D9624())
			{
				unk_0xC69E84EBBD7166E6(&Global_2265, 21);
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_2264, 7))
		{
			func_42();
			unk_0xC69E84EBBD7166E6(&Global_2264, 7);
		}
		if (unk_0x236D8AD7EE179F46(Global_2264, 0))
		{
			func_41();
		}
		if (unk_0x236D8AD7EE179F46(Global_2550377, 0))
		{
			func_40();
		}
		if (unk_0x236D8AD7EE179F46(Global_2265, 11))
		{
			Global_2968 = 0;
			if (unk_0x236D8AD7EE179F46(Global_2264, 25))
			{
				Global_2968++;
			}
			if (unk_0x236D8AD7EE179F46(Global_2550377, 11))
			{
				if (Global_69020 == 0)
				{
					Global_2968++;
				}
			}
			if (unk_0x236D8AD7EE179F46(Global_2550377, 12))
			{
				if (Global_69020 && (Global_16757 || Global_16758))
				{
					Global_2968++;
				}
			}
			if (unk_0x236D8AD7EE179F46(Global_2550377, 19))
			{
				Global_2968++;
			}
			if (Global_2968 == 0)
			{
				unk_0xC69E84EBBD7166E6(&Global_2265, 11);
				iLocal_38 = 0;
			}
			else
			{
				iLocal_38 = 1;
			}
		}
		if (!func_39())
		{
			if (!unk_0x30D46D6512711A3E())
			{
				if (Global_14394.f_1 == 3)
				{
					if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
					{
						if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()) || unk_0xA82043C23D0AF917())
						{
							if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
							{
								if (Global_69020)
								{
									func_31();
								}
								else
								{
									func_31();
								}
							}
						}
					}
				}
			}
			if (Global_14394.f_1 == 4)
			{
				if (unk_0x236D8AD7EE179F46(Global_2265, 21))
				{
					func_31();
				}
			}
			func_21();
		}
		else if (func_14())
		{
		}
		switch (Global_16728)
		{
			case 0:
				func_13();
				if (Global_16730 == 1)
				{
					func_12();
				}
				break;
			
			case 1:
				func_11();
				break;
			
			case 2:
				func_10();
				break;
			
			case 3:
				func_9();
				break;
			
			case 4:
				func_8();
				break;
			
			case 5:
				func_7();
				break;
			
			case 14:
				func_12();
				break;
			
			case 6:
				if (Global_16730 == 1)
				{
					func_12();
				}
				if (Global_16731 == 1)
				{
					Global_16728 = 9;
					Global_16731 = 0;
				}
				break;
			
			case 8:
				func_6();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()
{
	iLocal_67 = unk_0x87C213569F872D26(Global_16732);
	switch (iLocal_67)
	{
		case 0:
			Global_16728 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			unk_0xF3148AAF69AF9CBC(&Global_2265, 15);
			func_12();
			break;
	}
}

void func_2()
{
	if (unk_0x89E90906EB7CC865(Global_16732))
	{
		Global_16728 = 13;
	}
	else
	{
		func_12();
	}
}

void func_3()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		iLocal_65 = unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), uLocal_63);
	}
	else
	{
		iLocal_64 = unk_0x48E480685981C7D4();
		iLocal_65 = (iLocal_64 - iLocal_62);
	}
	if (iLocal_65 > 3000)
	{
		unk_0x81B3DBD3862D4A7D();
	}
	if (iLocal_65 > 3200)
	{
		Global_16728 = 6;
	}
}

void func_4()
{
	iLocal_67 = unk_0xB895F84430648938();
	switch (iLocal_67)
	{
		case 0:
			if (unk_0x1C6DF6AD69BE853E())
			{
				uLocal_63 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				iLocal_62 = unk_0x48E480685981C7D4();
			}
			Global_16728 = 11;
			unk_0x5AE11BC36633DE4E(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_5()
{
	Global_16733 = -1;
	if (unk_0x13B92E338047CA5A(Global_16733))
	{
		Global_16728 = 10;
		unk_0x91418342B226A788("CELL_278");
		unk_0x15F4C49B01222ABB(1);
	}
	else
	{
		func_12();
	}
}

void func_6()
{
	iLocal_67 = unk_0x2DF17A04AAA2B5C3(1);
	switch (iLocal_67)
	{
		case 0:
			Global_16728 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_7()
{
	iLocal_67 = unk_0x9ED44D6833CFAE3E(iLocal_68);
	switch (iLocal_67)
	{
		case 0:
			unk_0xA83C089540B6E947(1, 1);
			Global_16728 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_68 == 3)
			{
				unk_0xF3148AAF69AF9CBC(&Global_2265, 14);
				unk_0xA83C089540B6E947(0, 0);
				unk_0xA8FBCDFA4FF2F963();
				unk_0xA493449248079310();
				Global_16728 = 6;
			}
			if (Global_16728 == 5)
			{
				if (iLocal_68 == 0)
				{
					Global_16728 = 4;
					iLocal_68 = 1;
					unk_0xA493449248079310();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			if (Global_16728 == 5)
			{
				if (iLocal_68 == 1)
				{
					Global_16728 = 4;
					iLocal_68 = 2;
					unk_0xA493449248079310();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			if (Global_16728 == 5)
			{
				if (iLocal_68 == 2)
				{
					Global_16728 = 4;
					iLocal_68 = 3;
					unk_0xA493449248079310();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			break;
	}
}

void func_8()
{
	if (unk_0x5A730E38425F93EE(iLocal_68))
	{
		Global_16728 = 5;
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 15);
		func_12();
	}
}

void func_9()
{
	iLocal_67 = unk_0x8B3CA19C0C1F1751();
	switch (iLocal_67)
	{
		case 0:
			Global_16728 = 4;
			iLocal_68 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14394.f_1 = 3;
			func_12();
			break;
	}
}

void func_10()
{
	if (unk_0x89F2094A8D63C98F())
	{
		Global_16728 = 3;
	}
}

void func_11()
{
	if (unk_0xC9D9444186B5A374() > 0)
	{
		Global_16728 = 2;
	}
}

void func_12()
{
	unk_0xA83C089540B6E947(0, 0);
	unk_0xA8FBCDFA4FF2F963();
	unk_0xA493449248079310();
	unk_0x81B3DBD3862D4A7D();
	Global_16729 = 0;
	Global_16730 = 0;
	Global_16731 = 0;
	Global_16728 = 0;
}

void func_13()
{
	if (Global_16729)
	{
		Global_16728 = 1;
		unk_0xC69E84EBBD7166E6(&Global_2265, 14);
		unk_0x5AE11BC36633DE4E(0);
	}
}

int func_14()
{
	char* sVar0;
	
	if ((func_20(2, Global_14361, 0) && !unk_0x8D774C92D1A59A06(19)) && !unk_0xFA93A31A91EA0392())
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0xCEC9D74C9FF51C8C(unk_0x81873881071CD9FE(), "Synched"))
			{
				sVar0 = unk_0x46E7F5908F815DDC("CELL_ANTIH_A");
				unk_0x02A6B267064771B1("CELL_ANTIH");
				unk_0xDFBE4FFEF7FC22F3("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (func_19(unk_0x81873881071CD9FE()) || unk_0xBCF7564B54A59041(unk_0x81873881071CD9FE()))
			{
				if (unk_0xCAD9951C953F5B2D(0, 25) || unk_0xCAD9951C953F5B2D(0, 68))
				{
					return 0;
				}
			}
		}
		Global_16752 = 0;
		Global_16753 = 0;
		if (unk_0xB1FC533E6FEA8E70() == Global_16750 && unk_0xB1FC533E6FEA8E70() != -1)
		{
			Global_16752 = Global_16751;
			iLocal_71 = unk_0x48E480685981C7D4();
			iLocal_73 = 0;
			iLocal_74 = 0;
			while (((func_18(2, Global_14361) && iLocal_73 < 250) && Global_14560 == 0) && !unk_0x8D774C92D1A59A06(19))
			{
				if (Global_2968 > 0)
				{
					func_15();
				}
				unk_0x4EDE34FBADD967A6(0);
				iLocal_72 = unk_0x48E480685981C7D4();
				iLocal_73 = (iLocal_72 - iLocal_71);
				if (Global_2968 > 0)
				{
					func_15();
				}
			}
			if ((func_18(2, Global_14361) && Global_14560 == 0) && !unk_0x8D774C92D1A59A06(19))
			{
				iLocal_74 = 1;
			}
			if (Global_14560 == 0)
			{
				if (iLocal_74 == 1)
				{
					Global_16753 = 1;
					Global_16752 = Global_16751;
					if (Global_16752 == 1)
					{
					}
					if (Global_16752 == 2)
					{
					}
					if (Global_16752 == 3)
					{
					}
					if (Global_16752 == 0)
					{
					}
				}
				else
				{
					Global_16752 = 0;
				}
			}
			else
			{
				Global_16752 = 0;
			}
		}
		else
		{
			Global_16752 = 0;
		}
		if (!unk_0x8D774C92D1A59A06(19))
		{
			return 1;
		}
		else
		{
			Global_16752 = 0;
			Global_16753 = 0;
			return 0;
		}
	}
	return 0;
}

void func_15()
{
	if (Global_16758)
	{
		fLocal_84 = -0.055f;
		fLocal_85 = 0.745f;
		fLocal_80 = unk_0xCAF8683E9362A022();
		fLocal_86 = ((100f * fLocal_83) - (100f * fLocal_80));
		fLocal_81 = (fLocal_84 + (fLocal_86 * 0.005f));
		fLocal_82 = (fLocal_85 - (fLocal_86 * 0.005f));
		if (!func_17())
		{
			unk_0x59C5FF40FC7463C1(1);
			unk_0x7F3AA121397DEEC9(7);
			if (unk_0x913B1C01C1BA6C6F())
			{
				unk_0xF305B6CCFBFACA8C();
			}
			unk_0xD45896EF84BD41C8(uLocal_36, fLocal_81, fLocal_82, 0.27f, 0.45f, 255, 255, 255, 255, 0);
			unk_0x59C5FF40FC7463C1(0);
			unk_0x7F3AA121397DEEC9(4);
		}
	}
	else
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (Global_2410756.f_673)
			{
				bLocal_37 = false;
			}
			else if (unk_0x236D8AD7EE179F46(Global_2264, 13))
			{
				if (unk_0x236D8AD7EE179F46(Global_2550377, 19))
				{
					bLocal_37 = false;
				}
				else
				{
					bLocal_37 = true;
				}
			}
			else
			{
				bLocal_37 = false;
			}
		}
		else if (Global_2410756.f_673 || unk_0x236D8AD7EE179F46(Global_2264, 13))
		{
			bLocal_37 = true;
		}
		else
		{
			bLocal_37 = false;
		}
		if (unk_0xB10A5D96DA59AA6B())
		{
			if (!unk_0x2DD54246D4BB0A20())
			{
				if (!bLocal_37)
				{
					if (!func_39())
					{
						if (!func_16())
						{
							if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
							{
								if (!unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
								{
									unk_0x7F3AA121397DEEC9(4);
									if (unk_0x913B1C01C1BA6C6F() && Global_2410756.f_673)
									{
										fLocal_84 = 0.165f;
										fLocal_85 = 0.755f;
									}
									else
									{
										fLocal_84 = 0.07f;
										fLocal_85 = 0.755f;
									}
									fLocal_80 = unk_0xCAF8683E9362A022();
									fLocal_86 = ((100f * fLocal_83) - (100f * fLocal_80));
									fLocal_81 = (fLocal_84 + (fLocal_86 * 0.005f));
									fLocal_82 = (fLocal_85 - (fLocal_86 * 0.005f));
									if (!func_17())
									{
										if (unk_0x913B1C01C1BA6C6F())
										{
											unk_0xF305B6CCFBFACA8C();
										}
										unk_0xD45896EF84BD41C8(uLocal_36, fLocal_81, fLocal_82, 0.27f, 0.45f, 255, 255, 255, 255, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_16()
{
	if (unk_0x968BF1C2C695B61A(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (unk_0x236D8AD7EE179F46(Global_2266, 3))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0, int iParam1)
{
	if (unk_0xCAD9951C953F5B2D(iParam0, iParam1))
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0x87E58291A874D55F() == 0)
			{
				return 0;
			}
		}
		if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
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

int func_19(var uParam0)
{
	int iVar0;
	
	if (unk_0x763F2CFB73975AA7())
	{
		if (!unk_0x5FEB513A4402FD59(uParam0))
		{
			unk_0x5F446E70DA9B8122(uParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x093DEAE9A023FAA0(iParam0, iParam1) || (iParam2 == 1 && unk_0x5BD35B90C0693406(iParam0, iParam1)))
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0x87E58291A874D55F() == 0 || (unk_0x18138B3C6FD07449() && unk_0x3D6272A8E1C449E9(2)))
			{
				return 0;
			}
		}
		if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
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

void func_21()
{
	switch (Global_14394.f_1)
	{
		case 4:
			if (unk_0x236D8AD7EE179F46(Global_2265, 21))
			{
			}
			else
			{
				if (unk_0x64AD45A6264810A8(Global_14391))
				{
				}
				else
				{
					if (!unk_0x64AD45A6264810A8(Global_14391))
					{
						if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
						{
							unk_0xE0013E74AB6963DC("cellphone_flashhand");
							while (!unk_0x06D4A1BE3DF77306("cellphone_flashhand"))
							{
								unk_0x4EDE34FBADD967A6(0);
								if (Global_2968 > 0)
								{
									func_15();
								}
							}
							if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
							{
								Global_14391 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
							}
							unk_0xD25F9F5A80824C77("cellphone_flashhand");
						}
					}
					func_30(0);
				}
				if (Global_15703 || Global_15704)
				{
					if (!unk_0x64AD45A6264810A8(Global_14391))
					{
						if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
						{
							unk_0xE0013E74AB6963DC("cellphone_flashhand");
							while (!unk_0x06D4A1BE3DF77306("cellphone_flashhand"))
							{
								unk_0x4EDE34FBADD967A6(0);
								if (Global_2968 > 0)
								{
									func_15();
								}
							}
							if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
							{
								Global_14391 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
							}
							unk_0xD25F9F5A80824C77("cellphone_flashhand");
						}
					}
					while (!unk_0xCC8E3BAC62A29F42(Global_14375) && Global_14377 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (Global_2968 > 0)
						{
							func_15();
						}
					}
					if (Global_14377 == 0)
					{
						Global_14394.f_1 = 9;
						func_22();
					}
				}
				else
				{
					bLocal_79 = false;
					if (Global_69020 && Global_16755)
					{
						bLocal_79 = true;
					}
					if (((Global_98931.f_12665[Global_14394 /*20*/].f_18 == 1 || Global_98931.f_12665[Global_14394 /*20*/].f_17 == 1) || bLocal_79 == 1) || Global_16752 != 0)
					{
						while (!unk_0xCC8E3BAC62A29F42(Global_14375) && Global_14377 == 0)
						{
							unk_0x4EDE34FBADD967A6(0);
							if (Global_2968 > 0)
							{
								func_15();
							}
						}
						if (Global_14377 == 0)
						{
							if (Global_14394.f_1 > 3)
							{
								Global_14394.f_1 = 6;
								if (Global_16752 == 0)
								{
									if (bLocal_79)
									{
									}
									else if (Global_69020 == 0)
									{
										if (Global_98931.f_12665[Global_14394 /*20*/].f_17 == 1)
										{
											func_65(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_16752 == 3)
									{
									}
									if (Global_16752 == 1)
									{
									}
									if (Global_16752 == 2)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!unk_0xCC8E3BAC62A29F42(Global_14375) && Global_14377 == 0)
						{
							unk_0x4EDE34FBADD967A6(0);
							if (Global_2968 > 0)
							{
								func_15();
							}
						}
						if (Global_14377 == 0)
						{
							if (Global_14394.f_1 > 3)
							{
								if (Global_15703 || Global_15704)
								{
									Global_14394.f_1 = 9;
								}
								else
								{
									Global_14394.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_22()
{
	struct<3> Var0;
	
	if (Global_14377 == 1)
	{
		return;
	}
	if (Global_14394.f_1 < 4)
	{
		return;
	}
	while (!unk_0xCC8E3BAC62A29F42(Global_14375))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14394.f_1)
	{
		case 6:
			func_29(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_2869);
			if (Global_2869 == 1)
			{
				func_29(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14398;
			}
			else
			{
				func_29(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14399), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14399;
			}
			if (Global_14382)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14554 == 0)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else if (Global_69020)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else
			{
				if (Global_14553 == 1)
				{
					if (Global_14382)
					{
						func_26(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_26(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_26(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_26(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_29(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_26(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14393 == 1)
			{
				func_25();
				func_29(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_24("CELL_300");
					func_24("CELL_217");
					func_24("CELL_217");
					unk_0xBA9BA6181F2B6111();
				}
				else if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_217", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
				}
				func_29(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15693 == 4 || Global_15693 == 3)
			{
				func_29(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_25();
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_24("CELL_300");
					func_24("CELL_219");
					func_24("CELL_219");
					unk_0xBA9BA6181F2B6111();
				}
				else
				{
					if (Global_15951)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
					{
						func_29(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_29(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), &Var0, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
					}
				}
				func_29(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_23()
{
	if (unk_0xCC8E3BAC62A29F42(Global_14375))
	{
		if (Global_14393 == 1)
		{
			if (Global_14382)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15740)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_26(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
		}
		else
		{
			func_26(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_25()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394 == 0)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 1)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 2)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 3)
		{
			switch (Global_2550577)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_26(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_24(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam8))
	{
		func_24(iParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam9))
	{
		func_24(iParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam10))
	{
		func_24(iParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam11))
	{
		func_24(iParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_28(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_24(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar2);
								unk_0xBA9BA6181F2B6111();
							}
							if (Global_2436984)
							{
								if (iVar1 == 14)
								{
									func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_98931.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_98931.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_98931.f_12755[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69020)
								{
									iVar4 = 0;
									iVar4 = Global_2549111;
									func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar5 = Global_36498;
											break;
										
										case 1:
											iVar5 = Global_36499;
											break;
										
										case 2:
											iVar5 = Global_36500;
											break;
										
										default:
											break;
									}
									func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_24(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(Global_2270);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_24(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar6);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar7 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_24(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar7);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 8)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_24(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else if ((iVar1 == 23 && unk_0xD994929E13CC1ED5(&(Global_2271[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x236D8AD7EE179F46(Global_2265, 6))
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_24(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else
							{
								func_26(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_28(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_29(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		if (Global_14394.f_1 == 9)
		{
			Global_14552 = 1;
		}
	}
	else
	{
		Global_14552 = 0;
	}
}

void func_31()
{
	if (func_14() || unk_0x236D8AD7EE179F46(Global_2264, 8))
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 8);
		func_33();
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				if (func_32())
				{
				}
				else if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
				{
					if (unk_0x236D8AD7EE179F46(Global_2265, 21))
					{
						unk_0xC69E84EBBD7166E6(&Global_2265, 21);
					}
					if (Global_14560 == 1)
					{
						Global_14560 = 0;
					}
					switch (Global_14394.f_1)
					{
						case 3:
							Global_14394.f_1 = 4;
							break;
						
						default:
							break;
					}
					Global_14550 = 1;
				}
			}
		}
	}
}

int func_32()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if ((((unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x3A5BA67B2C97F000(unk_0x81873881071CD9FE(), 0)) || unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE())) || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 1)
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

void func_33()
{
	if (func_28(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_34();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_34()
{
	func_35();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_35()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_38(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_37(unk_0x81873881071CD9FE());
			if (func_36(iVar0) && (!func_28(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_36(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_38(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_38(int iParam0)
{
	if (func_36(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_39()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	unk_0xC69E84EBBD7166E6(&Global_2550377, 0);
	if (Global_16754 != 0)
	{
		if (unk_0xF873F9422A5D48E5(Global_16754))
		{
			if (unk_0x79A3388251B8DD5B(Global_16754))
			{
				StringCopy(&cVar0, unk_0xD23DF626788C30FE(Global_16754), 64);
				Global_16762[Global_16760] = Global_16754;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16762[Global_2550361] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16762[Global_2550361] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2549112[Global_2550361 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16762[Global_2550361] = 0;
	}
	if (unk_0xB318FDA0D1ABDB20(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0xD994929E13CC1ED5(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_2549112[Global_2550361 /*104*/].f_32 == 4 || Global_2549112[Global_2550361 /*104*/].f_32 == 5) || Global_2549112[Global_2550361 /*104*/].f_32 == 6) || Global_2549112[Global_2550361 /*104*/].f_32 == 7) || Global_2549112[Global_2550361 /*104*/].f_32 == 8) || Global_2549112[Global_2550361 /*104*/].f_32 == 9) || Global_2549112[Global_2550361 /*104*/].f_32 == 10) || Global_2549112[Global_2550361 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_2549112[Global_2550361 /*104*/].f_49)
		{
			case 1:
				unk_0x02A6B267064771B1("CELL_CL01");
				break;
			
			case 2:
				unk_0x02A6B267064771B1("CELL_CL02");
				break;
			
			case 3:
				unk_0x02A6B267064771B1("CELL_CL03");
				break;
			
			case 4:
				unk_0x02A6B267064771B1("CELL_CL04");
				break;
			
			case 5:
				unk_0x02A6B267064771B1("CELL_CL05");
				break;
			
			case 6:
				unk_0x02A6B267064771B1("CELL_CL06");
				break;
			
			case 7:
				unk_0x02A6B267064771B1("CELL_CL07");
				break;
			
			case 8:
				unk_0x02A6B267064771B1("CELL_CL08");
				break;
			
			case 9:
				unk_0x02A6B267064771B1("CELL_CL09");
				break;
		}
		unk_0x072D7B028D6C7A05(&(Global_2549112[Global_2550361 /*104*/]));
		while (iVar16 < Global_2549112[Global_2550361 /*104*/].f_49)
		{
			switch (Global_2549112[Global_2550361 /*104*/].f_32)
			{
				case 4:
					unk_0x072D7B028D6C7A05(&(Global_2451473.f_1554[iVar16 /*4*/]));
					break;
				
				case 5:
					unk_0x072D7B028D6C7A05(&(Global_1698747[iVar16 /*4*/]));
					break;
				
				case 6:
					unk_0x072D7B028D6C7A05(&(Global_1698788[iVar16 /*4*/]));
					break;
				
				case 7:
					unk_0x072D7B028D6C7A05(&(Global_1698809[iVar16 /*4*/]));
					break;
				
				case 8:
					unk_0x072D7B028D6C7A05(&(Global_1698826[iVar16 /*4*/]));
					break;
				
				case 9:
					unk_0x072D7B028D6C7A05(&(Global_1698839[iVar16 /*4*/]));
					break;
				
				case 10:
					unk_0x072D7B028D6C7A05(&(Global_1698852[iVar16 /*4*/]));
					break;
				
				case 11:
					unk_0x072D7B028D6C7A05(&(Global_1698865[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2549112[Global_2550361 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 2, &cVar17, 0);
		unk_0xF3148AAF69AF9CBC(&Global_2550377, 1);
		Global_16751 = 1;
		Global_16750 = uLocal_61;
		Global_16754 = 0;
	}
	else
	{
		unk_0x02A6B267064771B1(&(Global_2549112[Global_2550361 /*104*/]));
		switch (Global_2549112[Global_2550361 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_33));
				if (Global_2549112[Global_2550361 /*104*/].f_66 == 1 && !unk_0xD994929E13CC1ED5(&(Global_2549112[Global_2550361 /*104*/].f_67), "NULL"))
				{
					unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_67));
				}
				if ((Global_2549112[Global_2550361 /*104*/].f_66 == 2 && !unk_0xD994929E13CC1ED5(&(Global_2549112[Global_2550361 /*104*/].f_67), "NULL")) && !unk_0xD994929E13CC1ED5(&(Global_2549112[Global_2550361 /*104*/].f_83), "NULL"))
				{
					if (unk_0x7281387C8D4EC316(&(Global_2549112[Global_2550361 /*104*/].f_67)))
					{
						unk_0x072D7B028D6C7A05(&(Global_2549112[Global_2550361 /*104*/].f_67));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_67));
					}
					if (unk_0x7281387C8D4EC316(&(Global_2549112[Global_2550361 /*104*/].f_83)))
					{
						unk_0x072D7B028D6C7A05(&(Global_2549112[Global_2550361 /*104*/].f_83));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				unk_0x6D55FF05D62B91BC(Global_2549112[Global_2550361 /*104*/].f_49);
				break;
			
			case 3:
				unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_33));
				unk_0x6D55FF05D62B91BC(Global_2549112[Global_2550361 /*104*/].f_49);
				if (Global_2549112[Global_2550361 /*104*/].f_66 == 1 && !unk_0xD994929E13CC1ED5(&(Global_2549112[Global_2550361 /*104*/].f_67), "NULL"))
				{
					unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_67));
				}
				if ((Global_2549112[Global_2550361 /*104*/].f_66 == 2 && !unk_0xD994929E13CC1ED5(&(Global_2549112[Global_2550361 /*104*/].f_67), "NULL")) && !unk_0xD994929E13CC1ED5(&(Global_2549112[Global_2550361 /*104*/].f_83), "NULL"))
				{
					if (unk_0x7281387C8D4EC316(&(Global_2549112[Global_2550361 /*104*/].f_67)))
					{
						unk_0x072D7B028D6C7A05(&(Global_2549112[Global_2550361 /*104*/].f_67));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_67));
					}
					if (unk_0x7281387C8D4EC316(&(Global_2549112[Global_2550361 /*104*/].f_83)))
					{
						unk_0x072D7B028D6C7A05(&(Global_2549112[Global_2550361 /*104*/].f_83));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_2549112[Global_2550361 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_2549112[Global_2550361 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2952, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 2, &cVar33, 0);
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 1);
			Global_16751 = 1;
			Global_16750 = uLocal_61;
		}
		else
		{
			StringCopy(&cVar49, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2549112[Global_2550361 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_2549112[Global_2550361 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 2, &cVar65, 0);
			}
			else
			{
				uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 2, &cVar49, 0);
			}
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 1);
			Global_16751 = 1;
			Global_16750 = uLocal_61;
			Global_16754 = 0;
		}
	}
	Global_2549112[Global_2550361 /*104*/].f_16 = uLocal_61;
}

void func_41()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0x02A6B267064771B1("");
		StringCopy(&cVar16, unk_0x46E7F5908F815DDC(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x46E7F5908F815DDC("CELL_253");
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x02A6B267064771B1("CELL_255");
		unk_0x072D7B028D6C7A05(&(Global_2874[1 /*6*/]));
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 0);
}

void func_42()
{
	if (unk_0x236D8AD7EE179F46(Global_2264, 1))
	{
		func_45();
		func_43();
		Global_98931.f_12665[Global_14394 /*20*/].f_18 = 1;
		if (unk_0x1C6DF6AD69BE853E())
		{
			uLocal_50[Global_14394] = unk_0xD74C7D8D2E5E43D2();
			iLocal_40[Global_14394] = 1;
		}
		else if (!unk_0x236D8AD7EE179F46(Global_2264, 10))
		{
			iLocal_45[Global_14394] = unk_0x48E480685981C7D4();
			iLocal_40[Global_14394] = 1;
		}
		else
		{
			iLocal_45[0] = unk_0x48E480685981C7D4();
			iLocal_45[2] = unk_0x48E480685981C7D4();
			iLocal_45[1] = unk_0x48E480685981C7D4();
			iLocal_40[0] = 1;
			iLocal_40[2] = 1;
			iLocal_40[1] = 1;
		}
		unk_0xC69E84EBBD7166E6(&Global_2264, 1);
	}
}

void func_43()
{
	func_33();
	if (Global_69020)
	{
		Global_98931.f_12665[3 /*20*/].f_10 = func_105(1187, -1, 0);
	}
	if (Global_98931.f_12665[Global_14394 /*20*/].f_10 == 1)
	{
		if (!func_44(0))
		{
			unk_0x8C7933B8CC1FCB35(0, 2000, 100);
		}
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	if (Global_16754 != 0)
	{
		if (unk_0xF873F9422A5D48E5(Global_16754))
		{
			if (unk_0x79A3388251B8DD5B(Global_16754))
			{
				StringCopy(&cVar0, unk_0xD23DF626788C30FE(Global_16754), 64);
				Global_16762[Global_16760] = Global_16754;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16762[Global_16760] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16762[Global_16760] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_98931.f_12755[Global_16760 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16762[Global_16760] = 0;
	}
	if (unk_0xB318FDA0D1ABDB20(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0xD994929E13CC1ED5(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_98931.f_12755[Global_16760 /*104*/].f_32 == 4 || Global_98931.f_12755[Global_16760 /*104*/].f_32 == 5) || Global_98931.f_12755[Global_16760 /*104*/].f_32 == 6) || Global_98931.f_12755[Global_16760 /*104*/].f_32 == 7) || Global_98931.f_12755[Global_16760 /*104*/].f_32 == 8) || Global_98931.f_12755[Global_16760 /*104*/].f_32 == 9) || Global_98931.f_12755[Global_16760 /*104*/].f_32 == 10) || Global_98931.f_12755[Global_16760 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_98931.f_12755[Global_16760 /*104*/].f_49)
		{
			case 1:
				unk_0x02A6B267064771B1("CELL_CL01");
				break;
			
			case 2:
				unk_0x02A6B267064771B1("CELL_CL02");
				break;
			
			case 3:
				unk_0x02A6B267064771B1("CELL_CL03");
				break;
			
			case 4:
				unk_0x02A6B267064771B1("CELL_CL04");
				break;
			
			case 5:
				unk_0x02A6B267064771B1("CELL_CL05");
				break;
			
			case 6:
				unk_0x02A6B267064771B1("CELL_CL06");
				break;
			
			case 7:
				unk_0x02A6B267064771B1("CELL_CL07");
				break;
			
			case 8:
				unk_0x02A6B267064771B1("CELL_CL08");
				break;
			
			case 9:
				unk_0x02A6B267064771B1("CELL_CL09");
				break;
		}
		unk_0x072D7B028D6C7A05(&(Global_98931.f_12755[Global_16760 /*104*/]));
		while (iVar16 < Global_98931.f_12755[Global_16760 /*104*/].f_49)
		{
			switch (Global_98931.f_12755[Global_16760 /*104*/].f_32)
			{
				case 4:
					unk_0x072D7B028D6C7A05(&(Global_2451473.f_1554[iVar16 /*4*/]));
					break;
				
				case 5:
					unk_0x072D7B028D6C7A05(&(Global_1698747[iVar16 /*4*/]));
					break;
				
				case 6:
					unk_0x072D7B028D6C7A05(&(Global_1698788[iVar16 /*4*/]));
					break;
				
				case 7:
					unk_0x072D7B028D6C7A05(&(Global_1698809[iVar16 /*4*/]));
					break;
				
				case 8:
					unk_0x072D7B028D6C7A05(&(Global_1698826[iVar16 /*4*/]));
					break;
				
				case 9:
					unk_0x072D7B028D6C7A05(&(Global_1698839[iVar16 /*4*/]));
					break;
				
				case 10:
					unk_0x072D7B028D6C7A05(&(Global_1698852[iVar16 /*4*/]));
					break;
				
				case 11:
					unk_0x072D7B028D6C7A05(&(Global_1698865[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_98931.f_12755[Global_16760 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 1, &cVar17, 0);
		Global_16751 = 3;
		Global_16750 = uLocal_61;
		Global_16754 = 0;
	}
	else
	{
		unk_0x02A6B267064771B1(&(Global_98931.f_12755[Global_16760 /*104*/]));
		switch (Global_98931.f_12755[Global_16760 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_33));
				if (Global_98931.f_12755[Global_16760 /*104*/].f_66 == 1 && !unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), "NULL"))
				{
					unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_67));
				}
				if ((Global_98931.f_12755[Global_16760 /*104*/].f_66 == 2 && !unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), "NULL")) && !unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[Global_16760 /*104*/].f_83), "NULL"))
				{
					if (unk_0x7281387C8D4EC316(&(Global_98931.f_12755[Global_16760 /*104*/].f_67)))
					{
						unk_0x072D7B028D6C7A05(&(Global_98931.f_12755[Global_16760 /*104*/].f_67));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_67));
					}
					if (unk_0x7281387C8D4EC316(&(Global_98931.f_12755[Global_16760 /*104*/].f_83)))
					{
						unk_0x072D7B028D6C7A05(&(Global_98931.f_12755[Global_16760 /*104*/].f_83));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				unk_0x6D55FF05D62B91BC(Global_98931.f_12755[Global_16760 /*104*/].f_49);
				break;
			
			case 3:
				unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_33));
				unk_0x6D55FF05D62B91BC(Global_98931.f_12755[Global_16760 /*104*/].f_49);
				if (Global_98931.f_12755[Global_16760 /*104*/].f_66 == 1 && !unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), "NULL"))
				{
					unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_67));
				}
				if ((Global_98931.f_12755[Global_16760 /*104*/].f_66 == 2 && !unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), "NULL")) && !unk_0xD994929E13CC1ED5(&(Global_98931.f_12755[Global_16760 /*104*/].f_83), "NULL"))
				{
					if (unk_0x7281387C8D4EC316(&(Global_98931.f_12755[Global_16760 /*104*/].f_67)))
					{
						unk_0x072D7B028D6C7A05(&(Global_98931.f_12755[Global_16760 /*104*/].f_67));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_67));
					}
					if (unk_0x7281387C8D4EC316(&(Global_98931.f_12755[Global_16760 /*104*/].f_83)))
					{
						unk_0x072D7B028D6C7A05(&(Global_98931.f_12755[Global_16760 /*104*/].f_83));
					}
					else
					{
						unk_0x6222A57F463E8EE7(&(Global_98931.f_12755[Global_16760 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_98931.f_12755[Global_16760 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2952, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 1, &cVar33, 0);
			Global_16751 = 3;
			Global_16750 = uLocal_61;
		}
		else
		{
			StringCopy(&cVar49, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_98931.f_12755[Global_16760 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_98931.f_12755[Global_16760 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 1, &cVar65, 0);
			}
			else
			{
				uLocal_61 = unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 1, &cVar49, 0);
			}
			Global_16751 = 3;
			Global_16750 = uLocal_61;
			Global_16754 = 0;
		}
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_16 = uLocal_61;
}

void func_46()
{
	if (unk_0x236D8AD7EE179F46(Global_2264, 19))
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 19);
		func_33();
		Global_98931.f_12665[3 /*20*/].f_18 = 0;
		Global_98931.f_12665[3 /*20*/].f_17 = 0;
	}
}

void func_47()
{
	if (iLocal_40[Global_14394] == 1)
	{
		if (unk_0x1C6DF6AD69BE853E())
		{
			iLocal_60 = unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), uLocal_50[Global_14394]);
		}
		else
		{
			iLocal_55[Global_14394] = unk_0x48E480685981C7D4();
			iLocal_60 = (iLocal_55[Global_14394] - iLocal_45[Global_14394]);
		}
		if (iLocal_60 > 300000)
		{
			Global_98931.f_12665[Global_14394 /*20*/].f_18 = 0;
			Global_98931.f_12665[Global_14394 /*20*/].f_17 = 0;
			iLocal_40[Global_14394] = 0;
		}
	}
}

void func_48()
{
	int iVar0;
	
	func_33();
	if (Global_69020 == 0)
	{
		if (!func_39())
		{
			if (iLocal_66 == 0)
			{
				if ((Global_98931.f_12755[21 /*104*/].f_24 != 0 || Global_98931.f_12755[22 /*104*/].f_24 != 0) || Global_98931.f_12755[23 /*104*/].f_24 != 0)
				{
					switch (Global_14394)
					{
						case 0:
							if (Global_98931.f_12755[21 /*104*/].f_24 != 0)
							{
								iLocal_39 = 21;
								iLocal_66 = 1;
								unk_0xC1B1E9A034A63A62(0);
							}
							break;
						
						case 1:
							if (Global_98931.f_12755[22 /*104*/].f_24 != 0)
							{
								iLocal_39 = 22;
								iLocal_66 = 1;
								unk_0xC1B1E9A034A63A62(0);
							}
							break;
						
						case 2:
							if (Global_98931.f_12755[23 /*104*/].f_24 != 0)
							{
								iLocal_39 = 23;
								iLocal_66 = 1;
								unk_0xC1B1E9A034A63A62(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (unk_0x83666F9FB8FEBD4B() > 15000)
			{
				iLocal_66 = 0;
				iVar0 = 0;
				func_33();
				if (iLocal_39 == 21 && Global_14394 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_39 == 22 && Global_14394 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_39 == 23 && Global_14394 != 2)
				{
					iVar0 = 1;
				}
				if (Global_98931.f_12755[iLocal_39 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!func_28(14))
					{
						if (func_51(Global_98931.f_12755[iLocal_39 /*104*/].f_17, &(Global_98931.f_12755[iLocal_39 /*104*/]), Global_98931.f_12755[iLocal_39 /*104*/].f_24, Global_98931.f_12755[iLocal_39 /*104*/].f_25, Global_98931.f_12755[iLocal_39 /*104*/].f_26, Global_98931.f_12755[iLocal_39 /*104*/].f_29, 0, 1, Global_98931.f_12755[iLocal_39 /*104*/].f_31, Global_98931.f_12755[iLocal_39 /*104*/].f_30))
						{
							Global_98931.f_12755[iLocal_39 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_77 == 0)
			{
				if (Global_2940[Global_14394])
				{
					iLocal_77 = 1;
					iLocal_78 = Global_14394;
					if (unk_0x1C6DF6AD69BE853E())
					{
						uLocal_75 = unk_0xD74C7D8D2E5E43D2();
					}
					else
					{
						iLocal_69 = unk_0x48E480685981C7D4();
					}
				}
			}
			else
			{
				if (unk_0x1C6DF6AD69BE853E())
				{
					iLocal_76 = unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), uLocal_75);
				}
				else
				{
					iLocal_70 = unk_0x48E480685981C7D4();
					iLocal_76 = (iLocal_70 - iLocal_69);
				}
				if (iLocal_76 > 7000)
				{
					if (func_49(0))
					{
						Global_2874[1 /*6*/] = { Global_2923[Global_14394 /*4*/] };
						Global_2950 = Global_2945[Global_14394];
						Global_2940[Global_14394] = 0;
						iLocal_77 = 0;
					}
				}
				if (iLocal_78 != Global_14394)
				{
					iLocal_77 = 0;
				}
			}
		}
	}
}

bool func_49(int iParam0)
{
	return func_50(iParam0, Global_35443);
}

int func_50(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xC69E84EBBD7166E6(&Global_2264, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_52(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			Global_2874[3 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			unk_0xF3148AAF69AF9CBC(&Global_2264, 1);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_52(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xD994929E13CC1ED5(sParam14, sParam15))
	{
	}
	func_33();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				return 0;
			}
		}
		if (Global_98931.f_12665[Global_14394 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_58() == 0)
	{
		func_56();
		return 0;
	}
	func_55(Global_16760);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/]), sParam1, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_24 = iParam2;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_25 = iParam7;
	Global_98931.f_12755[Global_16760 /*104*/].f_26 = uParam8;
	Global_98931.f_12755[Global_16760 /*104*/].f_29 = uParam9;
	Global_98931.f_12755[Global_16760 /*104*/].f_30 = uParam12;
	Global_98931.f_12755[Global_16760 /*104*/].f_31 = uParam11;
	Global_98931.f_12755[Global_16760 /*104*/].f_28 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_33), sParam4, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_50), sParam5, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_83), sParam15, 64);
	if (unk_0x236D8AD7EE179F46(Global_2264, 10))
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
		Global_2970 = 4;
		func_54(0);
		func_54(2);
		func_54(1);
	}
	else
	{
		func_33();
		switch (iParam16)
		{
			case 3:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[Global_14394] = 1;
				break;
			
			case 0:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14394)
			{
				case 0:
					func_54(0);
					Global_2970 = 0;
					break;
				
				case 1:
					func_54(1);
					Global_2970 = 1;
					break;
				
				case 2:
					func_54(2);
					Global_2970 = 2;
					break;
				
				case 3:
					func_54(3);
					Global_2970 = 3;
					break;
				
				default:
					Global_2970 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 10))
		{
			Global_98931.f_12665[0 /*20*/].f_17 = 1;
			Global_98931.f_12665[1 /*20*/].f_17 = 1;
			Global_98931.f_12665[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_98931.f_12665[Global_14394 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_98931.f_12665[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_98931.f_12665[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_98931.f_12665[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16762[Global_16760] = 0;
	if (bParam10)
	{
		func_33();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_53())
			{
				unk_0x35D7948F61AA3FEC(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_29(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(1);
			func_29(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_53()
{
	return Global_1315892;
}

void func_54(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_98931.f_12665[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_55(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xBF0A1447DA6AE4B5();
	uVar1 = unk_0x25B31B877207A3A9();
	uVar2 = unk_0x0C937048CF6952B5();
	uVar3 = unk_0x8B6B3DD84CE74978();
	uVar4 = unk_0x02DC618B9A1DB8D1() + 1;
	uVar5 = unk_0x57E483B654EDD986();
	Global_98931.f_12755[iParam0 /*104*/].f_18 = uVar0;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_57(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
		{
			Global_16760 = iVar2;
		}
		iVar2++;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_24 = 1;
}

int func_57(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0)
		{
			Global_16760 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0 || Global_98931.f_12755[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_57(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
			{
				Global_16760 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16760 == 34)
	{
		return 0;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 0;
	return 1;
}

void func_59()
{
	if (unk_0x236D8AD7EE179F46(Global_2264, 6))
	{
		if (Global_2968 > 0)
		{
			if (unk_0x236D8AD7EE179F46(Global_2265, 11))
			{
				if (iLocal_38)
				{
					func_60(uLocal_36, "CLEAR_ALL");
					if (unk_0x236D8AD7EE179F46(Global_2264, 25))
					{
						unk_0x21ED0FC9B5CC748B(uLocal_36, "CREATE_ALERT");
						unk_0xBD0C54D89298454E(26);
						unk_0x518198639630AE08(222f);
						unk_0x518198639630AE08(222f);
						unk_0xBA9BA6181F2B6111();
					}
					if (unk_0x236D8AD7EE179F46(Global_2550377, 11))
					{
						unk_0x21ED0FC9B5CC748B(uLocal_36, "CREATE_ALERT");
						unk_0xBD0C54D89298454E(53);
						unk_0x518198639630AE08(222f);
						unk_0x518198639630AE08(222f);
						unk_0xBA9BA6181F2B6111();
					}
					if (Global_69020 == 1)
					{
						if (unk_0x236D8AD7EE179F46(Global_2550377, 12))
						{
							unk_0x21ED0FC9B5CC748B(uLocal_36, "CREATE_ALERT");
							unk_0xBD0C54D89298454E(52);
							unk_0x518198639630AE08(222f);
							unk_0x518198639630AE08(222f);
							unk_0xBA9BA6181F2B6111();
						}
					}
					if (unk_0x236D8AD7EE179F46(Global_2550377, 19))
					{
						unk_0x21ED0FC9B5CC748B(uLocal_36, "CREATE_ALERT");
						unk_0xBD0C54D89298454E(55);
						unk_0x518198639630AE08(222f);
						if ((unk_0x236D8AD7EE179F46(Global_2550377, 12) || unk_0x236D8AD7EE179F46(Global_2550377, 11)) || unk_0x236D8AD7EE179F46(Global_2264, 25))
						{
							unk_0x518198639630AE08(192f);
						}
						else
						{
							unk_0x518198639630AE08(222f);
						}
						unk_0xBA9BA6181F2B6111();
					}
					unk_0xC69E84EBBD7166E6(&Global_2265, 11);
					iLocal_38 = 0;
				}
			}
		}
		if (Global_2968 < 1)
		{
			unk_0x4B6F01DE8CCE643E(&uLocal_36);
			unk_0xC69E84EBBD7166E6(&Global_2264, 6);
		}
		else
		{
			func_15();
		}
	}
	else if (Global_2968 > 0)
	{
		uLocal_36 = unk_0x95EF972E3A07B525("cellphone_alert_popup");
		while (!unk_0xCC8E3BAC62A29F42(uLocal_36))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x7F3AA121397DEEC9(4);
		unk_0xF3148AAF69AF9CBC(&Global_2264, 6);
	}
}

void func_60(var uParam0, char* sParam1)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBA9BA6181F2B6111();
}

void func_61()
{
	if (unk_0x236D8AD7EE179F46(Global_2265, 7))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 6);
		unk_0xC69E84EBBD7166E6(&Global_2265, 7);
		return;
	}
	if (!unk_0x236D8AD7EE179F46(Global_2265, 7))
	{
		unk_0xC69E84EBBD7166E6(&Global_2265, 6);
		return;
	}
}

void func_62()
{
	if (unk_0x236D8AD7EE179F46(Global_2265, 4))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 3);
		unk_0xC69E84EBBD7166E6(&Global_2265, 4);
		return;
	}
	if (!unk_0x236D8AD7EE179F46(Global_2265, 4))
	{
		unk_0xC69E84EBBD7166E6(&Global_2265, 3);
		return;
	}
}

void func_63()
{
	if (unk_0x236D8AD7EE179F46(Global_2265, 2))
	{
		if (!Global_14394.f_1 == 1)
		{
			Global_14394.f_1 = 0;
		}
		unk_0xC69E84EBBD7166E6(&Global_2265, 2);
		return;
	}
	if (!unk_0x236D8AD7EE179F46(Global_2265, 2))
	{
		if (!Global_14394.f_1 == 1)
		{
			if (Global_14394.f_1 < 4)
			{
				Global_14394.f_1 = 3;
			}
		}
		return;
	}
}

int func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			if (Global_14337 == 0)
			{
				if (Global_1579 != 128)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (Global_15693 != 2)
						{
						}
					}
				}
			}
		}
		if (func_28(14))
		{
			return 0;
		}
		if (unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
		{
			return 0;
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0xA29EEE4B2ABE7AE0())
			{
				if (unk_0x2C237D28F05F0008(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xD496D3841112DF95(unk_0x81873881071CD9FE()) || unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE())) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xE6A0905BBE55E98F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		if (Global_97979)
		{
			return 0;
		}
	}
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA29EEE4B2ABE7AE0()))
	{
		iVar2 = 1;
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				uVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if ((((((((unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(uVar3)) || unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(uVar3))) || unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(uVar3))) || unk_0x14B7103DBD149FFE(uVar3) == joaat("seashark")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("seashark2")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("rhino")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("submersible")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("submersible2")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2550579 || iVar2 == 1)
	{
		if (unk_0x968BF1C2C695B61A(joaat("apptrackify")) > 0 || Global_98931.f_12665.f_89)
		{
			if (unk_0x968BF1C2C695B61A(joaat("michael2")) > 0)
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

int func_65(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_33();
	if (Global_69020 == 0)
	{
		if (func_28(14))
		{
			if (Global_16752 == 2)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_14394.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_44(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14360 == 1)
	{
		return 0;
	}
	if (Global_14394.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x64AD45A6264810A8(Global_14391))
	{
		if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14394.f_1 < 4)
			{
				func_66("cellphone_flashhand");
				if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
				{
					Global_14391 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0xD25F9F5A80824C77("cellphone_flashhand");
			}
		}
	}
	while (!Global_14376)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_110();
	func_108();
	if (unk_0x968BF1C2C695B61A(Global_2271[iParam0 /*15*/].f_9) == 0)
	{
		Global_2870 = 0;
		Global_14394.f_1 = 7;
		func_66(&(Global_2271[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x968BF1C2C695B61A(Global_2271[iParam0 /*15*/].f_9) == 0)
			{
				Global_14392 = unk_0xE81651AD79516E48(&(Global_2271[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (unk_0x968BF1C2C695B61A(Global_2271[iParam0 /*15*/].f_9) == 0)
		{
			Global_14392 = unk_0xE81651AD79516E48(&(Global_2271[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xD25F9F5A80824C77(&(Global_2271[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_66(char* sParam0)
{
	unk_0xE0013E74AB6963DC(sParam0);
	while (!unk_0x06D4A1BE3DF77306(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_67(int iParam0)
{
	if (Global_14552)
	{
		func_68(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_39())
	{
		Global_14394.f_1 = 3;
	}
}

void func_68(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

void func_69()
{
	float fVar0;
	
	unk_0xD338B0444EFB8C65(1);
	unk_0x89086B596828ACBE(2, 201);
	unk_0x89086B596828ACBE(2, 202);
	fVar0 = 0f;
	while ((!unk_0x093DEAE9A023FAA0(2, 201) && !unk_0x093DEAE9A023FAA0(2, 202)) || fVar0 < 1f)
	{
		unk_0xDC38CC1E35B6A5D7("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x8D51D24D214E2FF2());
	}
	unk_0xD338B0444EFB8C65(0);
	if (unk_0x093DEAE9A023FAA0(2, 201))
	{
		unk_0x3B283FEBA87FFBEB(0);
		Global_97878 = 1;
	}
}

void func_70(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0xD338B0444EFB8C65(1);
	unk_0x89086B596828ACBE(2, 201);
	fVar0 = 0f;
	while (!unk_0x093DEAE9A023FAA0(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_71(iParam0, 119);
		unk_0x7B1776B3B53F8D74("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", sVar1, 1);
		unk_0x4EDE34FBADD967A6(0);
		fVar0 = (fVar0 + unk_0x8D51D24D214E2FF2());
	}
	unk_0xD338B0444EFB8C65(0);
}

char* func_71(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_72(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x968BF1C2C695B61A(unk_0xA60A6B4935A3E9A7()) > 1)
		{
			return 2;
		}
	}
	if (func_103() && !func_28(14))
	{
		return 3;
	}
	if (func_102())
	{
		return 3;
	}
	if (func_101())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_100())
		{
			return 8;
		}
	}
	if (Global_88062)
	{
		return 3;
	}
	if (Global_25199)
	{
		return 8;
	}
	if (Global_25094)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x968BF1C2C695B61A(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x968BF1C2C695B61A(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x968BF1C2C695B61A(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x968BF1C2C695B61A(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x968BF1C2C695B61A(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x968BF1C2C695B61A(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_99(bParam1))
	{
		return 3;
	}
	if (unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE()) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
	{
		return 12;
	}
	if (func_98(Global_97956, 256))
	{
		return 3;
	}
	if (((func_97() || func_96()) || func_91()) || func_90())
	{
		return 5;
	}
	if (func_90())
	{
		return 5;
	}
	if (func_89())
	{
		return 5;
	}
	if (func_88())
	{
		return 5;
	}
	if (func_96())
	{
		return 5;
	}
	if (func_87() && !Global_97882)
	{
		return 8;
	}
	if (func_91())
	{
		return 5;
	}
	if (unk_0xF33755A765033580() || func_86())
	{
		return 4;
	}
	if (func_53())
	{
		return 4;
	}
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_76(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()) || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) != -1)
			{
				return 11;
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || Global_97978)
			{
				return 10;
			}
		}
	}
	if (Global_25197)
	{
		return 8;
	}
	if (Global_69018)
	{
		return 4;
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0 || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
		{
			return 6;
		}
		if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
		{
			return 8;
		}
		if (unk_0xEE6F2DE3DB966195(unk_0x81873881071CD9FE()))
		{
			return 8;
		}
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return 7;
	}
	if (func_75())
	{
		return 8;
	}
	if (Global_24948)
	{
		return 3;
	}
	if (unk_0xCA020F3125A93EB9())
	{
		return 4;
	}
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_73(0))
		{
			return 8;
		}
	}
	if (unk_0x3ABE1D6542902581(unk_0x81873881071CD9FE()))
	{
		return 9;
	}
	return 0;
}

int func_73(bool bParam0)
{
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if ((((((((((!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || unk_0xADBE95599A01932F(unk_0x81873881071CD9FE())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE())) || unk_0x70847137E3B37A59(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xEE6F2DE3DB966195(unk_0x81873881071CD9FE())) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
	{
		return 0;
	}
	if ((((((func_53() || Global_17099.f_4) || func_74()) || unk_0xF0DD05479A1FFF98()) || unk_0xCEECC2F87148C3A4()) || func_86()) || func_102())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
	}
	return 1;
}

int func_74()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

bool func_75()
{
	return Global_52584;
}

int func_76(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		return 5;
	}
	Var0 = { func_85(unk_0x1329891157A54C63()) };
	if (Global_98018[10 /*10*/].f_1)
	{
		if (unk_0xB7A628320EFF8E47(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_84(2) && !func_84(17))
	{
		if (unk_0xB7A628320EFF8E47(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (unk_0xE15A3D0C3294EAF3(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0xE15A3D0C3294EAF3(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, 128.83f, -1297.98f, 29.3f) < 2f || unk_0xB7A628320EFF8E47(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (unk_0xB7A628320EFF8E47(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_83(26))
	{
		return 9;
	}
	if (!iLocal_26)
	{
		func_77(iParam0);
	}
	iVar3 = unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_97894 || iVar3 == Global_97895) || iVar3 == Global_97896)
	{
		return 9;
	}
	else if (iVar3 == Global_97885)
	{
		return 9;
	}
	else if (iVar3 == Global_97886)
	{
		return 9;
	}
	else if (iVar3 == Global_97889)
	{
		return 9;
	}
	else if (iVar3 == Global_97888)
	{
		return 9;
	}
	else if (iVar3 == Global_97890)
	{
		return 9;
	}
	else if (iVar3 == Global_97891)
	{
		return 9;
	}
	else if (iVar3 == Global_97892)
	{
		return 9;
	}
	else if (iVar3 == Global_97893)
	{
		return 9;
	}
	else if (iVar3 == Global_97897)
	{
		return 9;
	}
	else if (iVar3 == Global_97898)
	{
		return 9;
	}
	else if (iVar3 == Global_97899)
	{
		return 9;
	}
	else if (iVar3 == Global_97900)
	{
		return 9;
	}
	else if (iVar3 == Global_97901)
	{
		return 9;
	}
	else if ((iVar3 == Global_97902 || iVar3 == Global_97903) && func_84(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_97904[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_77(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_80(24, &Global_97885);
	func_80(49, &Global_97886);
	func_80(10, &Global_97894);
	func_80(9, &Global_97895);
	func_80(8, &Global_97896);
	func_80(21, &Global_97897);
	func_80(11, &Global_97898);
	func_80(18, &Global_97902);
	func_80(19, &Global_97903);
	Global_97889 = unk_0xA17AB437A96481B6(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_97888 = unk_0xA17AB437A96481B6(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_97890 = unk_0xA17AB437A96481B6(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_97891 = unk_0xA17AB437A96481B6(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_97892 = unk_0xA17AB437A96481B6(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_97893 = unk_0xA17AB437A96481B6(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_97899 = unk_0xA17AB437A96481B6(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_97900 = unk_0xA17AB437A96481B6(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_97901 = unk_0xA17AB437A96481B6(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_97904[iVar0] = unk_0xB3202EEA6EFADBA8(func_78(iVar0));
		iVar0++;
	}
	iLocal_26 = 1;
}

Vector3 func_78(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_79(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_80(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_81(iParam0) };
	*uParam1 = unk_0xA17AB437A96481B6(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_81(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_82(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_82(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_82(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_82(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_82(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_82(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_82(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049033[34 /*1485*/].f_146.f_1101 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_82(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_82(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_82(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_82(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_82(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_82(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_82(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_82(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_82(43) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 47:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 48:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 49:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 50:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_82(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_85127[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_81894)
	{
		if (Global_81894[iVar0 /*5*/] != -1)
		{
			if (Global_69289.f_109[Global_81894[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

Vector3 func_85(var uParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(uParam0), 0);
}

int func_86()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_87()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

bool func_88()
{
	return unk_0x236D8AD7EE179F46(Global_69268, 9);
}

bool func_89()
{
	return unk_0x236D8AD7EE179F46(Global_69268, 8);
}

int func_90()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (((((((((((((((unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_intro", 3) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_base", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	int iVar0;
	
	if (func_97())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_92(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_92(int iParam0)
{
	return func_93(iParam0, 20, 1);
}

int func_93(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_95() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_105(func_94(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_95()
{
	return Global_24946;
}

bool func_96()
{
	return Global_90861.f_297 > 0;
}

bool func_97()
{
	return Global_90861.f_296 > 0;
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_99(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

bool func_100()
{
	return Global_90848.f_1;
}

bool func_101()
{
	return Global_69287;
}

int func_102()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	return 1;
}

int func_104(int iParam0)
{
	if ((Global_16807 || Global_16806) || Global_16808)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14394.f_1 == 10)
		{
			if (Global_1579 == iParam0)
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
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_106(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_106(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_107();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

var func_107()
{
	return Global_1312729;
}

void func_108()
{
	if (Global_69020 == 0)
	{
		Global_2271[14 /*15*/].f_4 = -99;
		Global_2271[4 /*15*/].f_4 = -99;
		if (Global_2436984)
		{
			if (func_28(14))
			{
				func_109(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_109(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_109(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_109(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_109(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2271[iParam0 /*15*/]), sParam1, 16);
	Global_2271[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2271[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2271[iParam0 /*15*/].f_9 = unk_0x8DAF7A748E41AD46(sParam3);
	Global_2271[iParam0 /*15*/].f_10 = iParam4;
	Global_2271[iParam0 /*15*/].f_11 = iParam5;
	Global_2271[iParam0 /*15*/].f_12 = iParam6;
	Global_2271[iParam0 /*15*/].f_13 = iParam7;
	Global_2271[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2271[iParam0 /*15*/].f_12 == 0)
	{
		Global_2271[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2271[iParam0 /*15*/].f_13 == 0)
	{
		Global_2271[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2271[iParam0 /*15*/].f_14 == 0)
	{
		Global_2271[iParam0 /*15*/].f_14 = 0;
	}
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2271[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69020 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_98931.f_32499[iVar2 /*29*/].f_19[Global_14394] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_109(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_109(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_109(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_35443 == 15 && func_99(0) == 0) && Global_2269 == 0)
		{
			func_109(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14555 = 0;
			Global_2270 = 255;
		}
		else
		{
			func_109(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14555 = 1;
			Global_2270 = 42;
		}
		if (iVar1 == 1)
		{
			func_109(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_109(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_109(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_109(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_109(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_98931.f_12665.f_89 == 1)
		{
			func_109(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_98931.f_12665.f_88 == 1)
		{
			func_109(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_109(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_109(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_109(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_109(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_109(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_109(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_109(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_109(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_109(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_109(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_109(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_109(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_109(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_109(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_109(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_109(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_109(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0x236D8AD7EE179F46(Global_2550377, 4) == 1)
		{
			func_109(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_109(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_109(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_109(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_109(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_109(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_109(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_109(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_109(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_109(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_109(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_109(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_109(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_109(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_109(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_109(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_109(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0x236D8AD7EE179F46(Global_2550377, 4) == 1)
		{
			if (Global_1573418)
			{
				func_109(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_2550377, 4) == 0 && Global_1573418 == 0)
		{
			func_109(23, "CELL_BENWEB", 8, "AppInternet", 56, 1, 1, 0, 0);
		}
	}
}

void func_111()
{
}

