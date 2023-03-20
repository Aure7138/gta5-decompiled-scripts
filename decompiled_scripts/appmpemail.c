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
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<16> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_60[19];
	struct<16> Local_175[19];
	int iLocal_480 = 0;
	struct<3> Local_481 = { 0, 0, 0 } ;
	struct<3> Local_484 = { 0, 0, 0 } ;
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
	unk_0x3D0EAC6385DD6100();
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) == 0)
	{
		func_47();
	}
	func_46();
	Global_16758 = 0;
	Global_97353.f_12305[Global_14393 /*20*/].f_18 = 0;
	Global_14550 = 0;
	func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_41();
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 7;
	}
	iLocal_41 = unk_0x4F67E8ECA7D3F667();
	Global_14397 = 0;
	unk_0xA5D9670641C54F6B(&Local_484);
	Local_481 = { Local_484 };
	Local_481.f_0 = (Local_481.f_0 - 10f);
	Local_481.f_1 = (Local_481.f_1 + 20f);
	Global_16725 = 0;
	Global_16726 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_16726 == 0 && Global_16725 == 1)
		{
			func_40();
		}
		if (Global_16726 == 1 && Global_16725 == 0)
		{
			func_35();
		}
		if (iLocal_40 == 0)
		{
			iLocal_42 = unk_0x4F67E8ECA7D3F667();
			if ((iLocal_42 - iLocal_41) > 500)
			{
				iLocal_40 = 1;
			}
		}
		if ((Global_14393.f_1 != 9 && Global_16726 == 0) && Global_16725 == 0)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (Global_16758 == 0)
					{
						if (Global_2453243 == 0)
						{
							func_30();
							func_27();
						}
					}
					break;
				
				case 8:
					if (Global_16758 == 1)
					{
						func_5();
						func_30();
					}
					break;
				
				default:
					break;
			}
			if (Global_16758 == 0)
			{
				if (func_4())
				{
					Global_16725 = 1;
				}
			}
			else if (func_3(2, Global_14361, 0) || unk_0x4ED6CFDFE8D4131A(Global_2264, 12))
			{
				if (unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x7D1D4A3602B6AD4E(&Global_2264, 12);
					func_2();
					Global_14371 = 1;
					Global_16758 = 0;
					if (Global_14393.f_1 > 3)
					{
						Global_14393.f_1 = 7;
					}
					if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) == 0)
					{
						func_47();
					}
					func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_41();
					if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
					{
						if (Global_2543383[iLocal_34 /*104*/].f_31 == 1)
						{
							Global_2543383[iLocal_34 /*104*/].f_29 = 4;
							Global_2543383[iLocal_34 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2543383[iLocal_34 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		if (func_1())
		{
			func_47();
		}
	}
}

int func_1()
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0xB906B139171B1845(-1, "Menu_Back", &Global_14382, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xCCBB0BB9790E1F47(iParam0, iParam1) || (iParam2 == 1 && unk_0xA799AFD74BAFEA0F(iParam0, iParam1)))
	{
		if (unk_0xB0FB6CFAA5A1C833())
		{
			if (unk_0x37DF360F235A3893() == 0 || (unk_0x4E4F57E11BB51285() && unk_0x3653C46DD33107D5(2)))
			{
				return 0;
			}
		}
		if (unk_0x535384D6067BA42E() || unk_0xF0451C6FF481E814())
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

int func_4()
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	func_6();
}

void func_6()
{
	if (Global_2543383[iLocal_34 /*104*/].f_24 == 1)
	{
		if (Global_14371 == 0)
		{
			if (unk_0x2503EB2EA811EC9A(2, Global_14364))
			{
				func_2();
				Global_14371 = 1;
				func_21();
				if (Global_2543383[iLocal_34 /*104*/].f_27 == 1)
				{
					Global_2543383[iLocal_34 /*104*/].f_99[0] = 0;
					Global_2543383[iLocal_34 /*104*/].f_99[1] = 0;
					Global_2543383[iLocal_34 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2543383[iLocal_34 /*104*/].f_99[Global_14393] = 0;
				}
				if (func_20(iLocal_34))
				{
				}
				else
				{
					Global_2543383[iLocal_34 /*104*/].f_24 = 0;
					Global_2543383[iLocal_34 /*104*/].f_28 = 0;
				}
				unk_0x748DC7764EDB15A8(Global_2543383[iLocal_34 /*104*/].f_16);
				func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_32 > 0)
				{
					iLocal_32 = (iLocal_32 - 1);
				}
				func_41();
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
					Global_16758 = 0;
				}
			}
		}
	}
	else if (Global_14371 == 0)
	{
		if (unk_0x2503EB2EA811EC9A(2, Global_14365))
		{
			if (iLocal_36 == 1)
			{
				if (Global_14393.f_1 > 3)
				{
					StringCopy(&Global_67042, unk_0xCFEDCCAD3C5BA90D(&Global_16733), 64);
					Global_67067 = 7;
					unk_0xF73FBE4845C43B5B(&Global_2264, 10);
					Global_14393.f_1 = 6;
				}
				func_47();
			}
		}
	}
	if (Global_2543383[iLocal_34 /*104*/].f_31 == 1)
	{
		if (Global_14371 == 0)
		{
			if (func_3(2, Global_14365, 0))
			{
				func_17();
				Global_14371 = 1;
				Global_2543383[iLocal_34 /*104*/].f_29 = 2;
				Global_2543383[iLocal_34 /*104*/].f_24 = 1;
				Global_2543383[iLocal_34 /*104*/].f_31 = 0;
				unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_41();
			}
		}
	}
	if (Global_14371 == 0 && iLocal_40 == 1)
	{
		if (func_3(2, Global_14362, 0))
		{
			Global_14371 = 1;
			if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
			{
				func_17();
				Global_2543383[iLocal_34 /*104*/].f_29 = 3;
				Global_2543383[iLocal_34 /*104*/].f_24 = 1;
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_41();
			}
			else if (Global_2543383[iLocal_34 /*104*/].f_30 == 1)
			{
				func_17();
				Global_1578 = 144;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 10;
					func_15();
				}
				func_14("appContacts");
				Global_14391 = unk_0xE81651AD79516E48("appContacts", 3800);
				unk_0x0086D3067E1CFD1C("appContacts");
				Global_1578 = Global_2543383[iLocal_34 /*104*/].f_17;
				if (Global_97353.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97353.f_29774[Global_1578 /*29*/].f_3), &(Global_97353.f_29774[Global_1578 /*29*/].f_7), "CELL_211", &(Global_97353.f_29774[Global_1578 /*29*/].f_3), 0);
				}
				func_7();
				func_47();
			}
		}
	}
}

void func_7()
{
	char cVar0[24];
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!unk_0x64BAE9BE701E6C19(Global_14374))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2868);
			if (Global_2868 == 1)
			{
				func_45(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_45(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			}
			else if (Global_68245)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF73FBE4845C43B5B(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_45(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 20))
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_10();
				func_45(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97353.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
					unk_0xA734310215BCF528(4);
					unk_0xA734310215BCF528(0);
					unk_0xA734310215BCF528(2);
					unk_0x164FB269C22AF51C("CELL_CONDFON");
					unk_0x54534D588C114163(&Global_15707);
					unk_0x5BB4D22B8B03A30B();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xD4D85E4148B638AD();
				}
				else if (Global_97353.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97353.f_29774[Global_1578 /*29*/].f_3), &(Global_97353.f_29774[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97353.f_29774[Global_1578 /*29*/].f_3), 0);
				}
				func_45(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_45(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97353.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15705)
				{
					unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
					unk_0xA734310215BCF528(4);
					unk_0xA734310215BCF528(0);
					unk_0xA734310215BCF528(2);
					unk_0x164FB269C22AF51C("CELL_CONDFON");
					unk_0x54534D588C114163(&Global_15707);
					unk_0x5BB4D22B8B03A30B();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xD4D85E4148B638AD();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_97353.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97353.f_29774[Global_1578 /*29*/].f_3), &(Global_97353.f_29774[Global_1578 /*29*/].f_7), &cVar0, &(Global_97353.f_29774[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_45(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0x64BAE9BE701E6C19(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x4ED6CFDFE8D4131A(Global_2263, 20))
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
		}
		else
		{
			func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 20))
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)
{
	unk_0x164FB269C22AF51C(sParam0);
	unk_0x5BB4D22B8B03A30B();
}

void func_10()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97353.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97353.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97353.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2544848)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x4ED6CFDFE8D4131A(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(iVar2);
								unk_0xD4D85E4148B638AD();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97353.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97353.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97353.f_12395[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(Global_2269);
								unk_0xD4D85E4148B638AD();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x4ED6CFDFE8D4131A(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(iVar7);
								unk_0xD4D85E4148B638AD();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x4ED6CFDFE8D4131A(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(iVar8);
								unk_0xD4D85E4148B638AD();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(42);
								unk_0xD4D85E4148B638AD();
							}
							else
							{
								func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
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
	return Global_34913 == iParam0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6EA2AC68E7C7293(uParam0, sParam1);
	unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x2CF12F9ACF18F048(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xD4D85E4148B638AD();
}

void func_14(char* sParam0)
{
	unk_0x46ED607DDD40D7FE(sParam0);
	while (!unk_0xE97BD36574F8B0A6(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (func_16() && unk_0x6CA7C07CB3ECF0BA(unk_0x096275889B8E0EE0(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && iVar1 == 0)
		{
			iVar2 = unk_0x983DBD2F550D8434(unk_0x096275889B8E0EE0(), 0);
			if (Global_68245)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xAF77A1741517CE53(unk_0x096275889B8E0EE0()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xAF77A1741517CE53(unk_0x096275889B8E0EE0()))
			{
				iVar0 = 1;
			}
			if (!Global_14336)
			{
				if (Global_1578 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
						{
							if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
							{
							}
							else
							{
								if (Global_68245)
								{
									unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 244, 0);
									unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 243, 0);
									unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 242, 0);
								}
								unk_0xF73FBE4845C43B5B(&Global_2263, 11);
								unk_0x121389EDF3165EFB(unk_0x096275889B8E0EE0(), 1, 1);
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
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xA262E90CFCFB11BC();
	iVar1 = unk_0xBBCE897E81A3FFBC(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0xB906B139171B1845(-1, "Menu_Accept", &Global_14382, 1);
		func_18();
	}
}

void func_18()
{
	if (func_19())
	{
		unk_0x977FC0F30B11C478(5);
	}
}

int func_19()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xA262E90CFCFB11BC();
	iVar1 = unk_0xBBCE897E81A3FFBC(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2544850 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_20(int iParam0)
{
	if ((Global_97353.f_12395[iParam0 /*104*/].f_99[0] == 1 || Global_97353.f_12395[iParam0 /*104*/].f_99[1] == 1) || Global_97353.f_12395[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_21()
{
	if (func_12(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_22();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_22()
{
	func_23();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_26(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_25(unk_0x096275889B8E0EE0());
			if (func_24(iVar0) && (!func_12(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_24(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_27()
{
	struct<16> Var0;
	
	if (Global_14371 == 0)
	{
		if ((func_3(2, Global_14362, 0) || Global_2544633 == 1) || Global_16752 == 1)
		{
			if (Global_2544633 == 0 && Global_16752 == 0)
			{
				func_17();
			}
			Global_14371 = 1;
			iLocal_40 = 0;
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			iLocal_34 = iLocal_18[iLocal_32];
			if (Global_2543383[iLocal_34 /*104*/].f_24 != 0)
			{
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 8;
				}
				if (Global_2544633 == 1 || Global_16752 == 1)
				{
					iLocal_34 = iLocal_18[0];
					iLocal_33 = 0;
					if (Global_2544633 == 1)
					{
					}
					Global_16752 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_38 = 0;
					unk_0xF6EA2AC68E7C7293(Global_14374, "GET_CURRENT_SELECTION");
					uLocal_43 = unk_0xFA63F370BDF97C7B();
					while (!unk_0x4B5B57AE0EA82D41(uLocal_43) && iLocal_38 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_38 = 1;
						}
					}
					if (iLocal_38 == 1)
					{
						iLocal_39 = 0;
					}
					else
					{
						iLocal_39 = unk_0x54F8A8E8D49D766C(uLocal_43);
					}
					if (iLocal_39 < 0)
					{
						iLocal_39 = 0;
					}
					iLocal_34 = iLocal_18[iLocal_32];
					iLocal_33 = iLocal_32;
				}
				Global_2543383[iLocal_34 /*104*/].f_28 = 1;
				iLocal_36 = 0;
				StringCopy(&Global_16733, "NO_HYPERLINK", 64);
				Var0 = { Global_2543383[iLocal_34 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x73C258C68D6F55B6(&Var0))
				{
					Global_16733 = { Var0 };
					iLocal_36 = 1;
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xF73FBE4845C43B5B(&Global_2263, 17);
					Global_2543383[iLocal_34 /*104*/].f_26 = 1;
					Global_2543383[iLocal_34 /*104*/].f_24 = 2;
				}
				if (Global_2543383[iLocal_34 /*104*/].f_26 == 0)
				{
					Global_2543383[iLocal_34 /*104*/].f_24 = 1;
				}
				func_29();
				unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
				unk_0xA734310215BCF528(9);
				unk_0xA734310215BCF528(0);
				func_9("CELL_1");
				unk_0x164FB269C22AF51C("CELL_TO_FIELD");
				unk_0x54534D588C114163(unk_0x7124FD9AC0E01BA0(unk_0x217E9DC48139933D()));
				unk_0x5BB4D22B8B03A30B();
				if (Global_2543383[iLocal_34 /*104*/].f_17 == 145)
				{
					unk_0x164FB269C22AF51C("CELL_FROM_FIELD");
					unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_50));
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("CELL_FROM_FIELD");
					unk_0x734AB59A7DBD1DAA(&(Global_97353.f_29774[Global_2543383[iLocal_34 /*104*/].f_17 /*29*/].f_3));
					unk_0x5BB4D22B8B03A30B();
				}
				switch (Global_2543383[iLocal_34 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_2543383[iLocal_34 /*104*/]));
						break;
					
					case 1:
						unk_0x164FB269C22AF51C(&(Global_2543383[iLocal_34 /*104*/]));
						unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_33));
						if (Global_2543383[iLocal_34 /*104*/].f_66 == 1 && !unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL"))
						{
							unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2543383[iLocal_34 /*104*/].f_66 == 2 && !unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL")) && !unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (unk_0x73C258C68D6F55B6(&(Global_2543383[iLocal_34 /*104*/].f_67)))
							{
								unk_0x734AB59A7DBD1DAA(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							else
							{
								unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							if (unk_0x73C258C68D6F55B6(&(Global_2543383[iLocal_34 /*104*/].f_83)))
							{
								unk_0x734AB59A7DBD1DAA(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
							else
							{
								unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
						}
						unk_0x5BB4D22B8B03A30B();
						break;
					
					case 2:
						unk_0x164FB269C22AF51C(&(Global_2543383[iLocal_34 /*104*/]));
						unk_0xF00CED653959DE03(Global_2543383[iLocal_34 /*104*/].f_49);
						unk_0x5BB4D22B8B03A30B();
						break;
					
					case 3:
						unk_0x164FB269C22AF51C(&(Global_2543383[iLocal_34 /*104*/]));
						unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_33));
						unk_0xF00CED653959DE03(Global_2543383[iLocal_34 /*104*/].f_49);
						if (Global_2543383[iLocal_34 /*104*/].f_66 == 1 && !unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL"))
						{
							unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2543383[iLocal_34 /*104*/].f_66 == 2 && !unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL")) && !unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (unk_0x73C258C68D6F55B6(&(Global_2543383[iLocal_34 /*104*/].f_67)))
							{
								unk_0x734AB59A7DBD1DAA(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							else
							{
								unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							if (unk_0x73C258C68D6F55B6(&(Global_2543383[iLocal_34 /*104*/].f_83)))
							{
								unk_0x734AB59A7DBD1DAA(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
							else
							{
								unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
						}
						unk_0x5BB4D22B8B03A30B();
						break;
					
					case 4:
						func_28(iLocal_34);
						break;
					
					case 5:
						func_28(iLocal_34);
						break;
					
					case 6:
						func_28(iLocal_34);
						break;
					
					case 7:
						func_28(iLocal_34);
						break;
					
					case 8:
						func_28(iLocal_34);
						break;
					
					case 9:
						func_28(iLocal_34);
						break;
					
					case 10:
						func_28(iLocal_34);
						break;
					
					case 11:
						func_28(iLocal_34);
						break;
				}
				if (Global_2543383[iLocal_34 /*104*/].f_17 == 145)
				{
					unk_0x164FB269C22AF51C("CELL_2000");
					unk_0x54534D588C114163(&(Global_2543383[iLocal_34 /*104*/].f_50));
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					func_9(&(Global_97353.f_29774[Global_2543383[iLocal_34 /*104*/].f_17 /*29*/].f_3));
				}
				unk_0xD4D85E4148B638AD();
				Global_16758 = 1;
				func_45(Global_14374, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x748DC7764EDB15A8(Global_2543383[iLocal_34 /*104*/].f_16);
				if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
				{
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_2543383[iLocal_34 /*104*/].f_30 == 1)
				{
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
				{
					if (unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/]), "CELL_FINV"))
					{
						if (Global_14381)
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2543383[iLocal_34 /*104*/].f_24 == 2)
				{
					if (Global_2543383[iLocal_34 /*104*/].f_31 == 1)
					{
						iLocal_36 = 0;
						if (Global_14381)
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xF73FBE4845C43B5B(&Global_2263, 17);
					}
					else if (iLocal_36 == 0)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
					}
				}
				else if (Global_14381)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xF73FBE4845C43B5B(&Global_2263, 17);
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF73FBE4845C43B5B(&Global_2263, 17);
				}
				Global_97353.f_12305[Global_14393 /*20*/].f_18 = 0;
				Global_2544633 = 0;
			}
			else
			{
				Global_97353.f_12305[Global_14393 /*20*/].f_18 = 0;
				Global_2544633 = 0;
			}
		}
		if (Global_2453243 == 0)
		{
			if (Global_68245)
			{
			}
		}
	}
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_97353.f_12395[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x164FB269C22AF51C("CELL_CL01");
			break;
		
		case 2:
			unk_0x164FB269C22AF51C("CELL_CL02");
			break;
		
		case 3:
			unk_0x164FB269C22AF51C("CELL_CL03");
			break;
		
		case 4:
			unk_0x164FB269C22AF51C("CELL_CL04");
			break;
		
		case 5:
			unk_0x164FB269C22AF51C("CELL_CL05");
			break;
		
		case 6:
			unk_0x164FB269C22AF51C("CELL_CL06");
			break;
		
		case 7:
			unk_0x164FB269C22AF51C("CELL_CL07");
			break;
		
		case 8:
			unk_0x164FB269C22AF51C("CELL_CL08");
			break;
		
		case 9:
			unk_0x164FB269C22AF51C("CELL_CL09");
			break;
	}
	unk_0x734AB59A7DBD1DAA(&(Global_97353.f_12395[iParam0 /*104*/]));
	while (iVar0 < Global_97353.f_12395[iParam0 /*104*/].f_49)
	{
		switch (Global_97353.f_12395[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x734AB59A7DBD1DAA(&(Global_2446554.f_1551[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x734AB59A7DBD1DAA(&(Global_1683631[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x734AB59A7DBD1DAA(&(Global_1683672[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x734AB59A7DBD1DAA(&(Global_1683693[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x734AB59A7DBD1DAA(&(Global_1683710[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x734AB59A7DBD1DAA(&(Global_1683723[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x734AB59A7DBD1DAA(&(Global_1683736[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x734AB59A7DBD1DAA(&(Global_1683749[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x5BB4D22B8B03A30B();
}

void func_29()
{
	int iVar0;
	
	if (iLocal_480)
	{
		unk_0x4ACA10A91F66F1E2(&Local_44);
	}
	iLocal_480 = 0;
	if (Global_2543383[iLocal_34 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			if (unk_0xD3852F22AB713A1F(&(Global_2543383[iLocal_34 /*104*/]), &(Local_60[iVar0 /*6*/])))
			{
				Local_44 = { Local_175[iVar0 /*16*/] };
				iLocal_480 = 1;
				unk_0xC1BA29DF5631B0F8(&Local_44, 0);
				while (!unk_0x54D6900929CCF162(&Local_44))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
		}
	}
}

void func_30()
{
	if (iLocal_37)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_37 = 0;
		}
	}
	if (unk_0x3653C46DD33107D5(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
			}
			func_33();
		}
		if (func_3(2, 180, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			func_31();
		}
	}
	if (iLocal_37 == 0)
	{
		if (func_3(2, Global_14369, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
			}
			func_33();
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14370, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			func_31();
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_31()
{
	func_45(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
	func_32();
}

void func_32()
{
	if (func_19())
	{
		if (Global_14556 == 0)
		{
			unk_0x977FC0F30B11C478(2);
		}
		else
		{
			unk_0x977FC0F30B11C478(1);
		}
	}
}

void func_33()
{
	func_45(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
	func_34();
}

void func_34()
{
	if (func_19())
	{
		if (Global_14556 == 0)
		{
			unk_0x977FC0F30B11C478(1);
		}
		else
		{
			unk_0x977FC0F30B11C478(2);
		}
	}
}

void func_35()
{
	float fVar0;
	
	fVar0 = func_36(Local_484, Local_481, Global_14353, -90f, 0f, 90f, 350f, 0);
	unk_0x94711F1DA586F948((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16726 = 0;
		iLocal_17 = 0;
	}
}

float func_36(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2544851 == 0)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14) && Global_14393.f_1 < 4)
		{
			unk_0xA5D9670641C54F6B(&Var0);
			if (Global_14346[Global_14338 /*3*/].f_1 == Var0.f_1)
			{
				Global_2544851 = 1;
			}
		}
	}
	if (func_39() && Global_2544851 == 0)
	{
		return 2f;
	}
	if (iLocal_17 == 0)
	{
		iLocal_17 = unk_0x4F67E8ECA7D3F667();
	}
	fVar3 = func_38((unk_0xBBDA792448DB5A89((unk_0x4F67E8ECA7D3F667() - iLocal_17)) / fParam12), 0f, 1f);
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
		Global_14321 = { func_37(Param0, Param3, fVar4) };
		Global_14324 = { func_37(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14321 = { Param3 };
		Global_14324 = { Param9 };
	}
	unk_0xD191BA2C5A7D3C46(Global_14321);
	unk_0x8B04C3463BAA2E87(Global_14324, 0);
	return fVar3;
}

Vector3 func_37(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_38(float fParam0, float fParam1, float fParam2)
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

int func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
					{
						if (Global_15692 != 2)
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
		if (unk_0x6CA7C07CB3ECF0BA(unk_0x096275889B8E0EE0(), 0))
		{
			return 0;
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (!unk_0xA30D7FEC759B7B10())
			{
				if (unk_0xDDE5C125AC446723(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0()) || unk_0x9F26B8DC698D83E2(unk_0x096275889B8E0EE0())) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xA5F527ED186B98BE(unk_0x096275889B8E0EE0()))
		{
			return 0;
		}
		if (Global_96401)
		{
			return 0;
		}
	}
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xA262E90CFCFB11BC();
	iVar1 = unk_0xBBCE897E81A3FFBC(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA30D7FEC759B7B10()))
	{
		iVar2 = 1;
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				uVar3 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
				if (((((((unk_0x7331BD1F2125CC77(unk_0xDA76A9F39210D365(uVar3)) || unk_0x2BA0AE672835A516(unk_0xDA76A9F39210D365(uVar3))) || unk_0x7E9B1540150314F1(unk_0xDA76A9F39210D365(uVar3))) || unk_0xDA76A9F39210D365(uVar3) == joaat("seashark")) || unk_0xDA76A9F39210D365(uVar3) == joaat("seashark2")) || unk_0xDA76A9F39210D365(uVar3) == joaat("rhino")) || unk_0xDA76A9F39210D365(uVar3) == joaat("submersible")) || unk_0xDA76A9F39210D365(uVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2544850 || iVar2 == 1)
	{
		if (unk_0x8E34C953364A76DD(joaat("apptrackify")) > 0 || Global_97353.f_12305.f_89)
		{
			if (unk_0x8E34C953364A76DD(joaat("michael2")) > 0)
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

void func_40()
{
	float fVar0;
	
	fVar0 = func_36(Local_481, Local_484, -90f, 0f, 90f, Global_14353, 350f, 0);
	unk_0x94711F1DA586F948((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16725 = 0;
		func_47();
		iLocal_17 = 0;
	}
}

void func_41()
{
	if (Global_2544633 == 0)
	{
		if (iLocal_33 < 0)
		{
			iLocal_33 = 0;
		}
		func_42(Global_14374, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_45(Global_14374, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_33), -1082130432, -1082130432, -1082130432);
		if (Global_14381)
		{
			if (iLocal_31 > 0)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_31 > 0)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_68245)
		{
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
		}
		else
		{
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
		}
	}
	else
	{
		iLocal_33 = 0;
	}
}

void func_42(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF6EA2AC68E7C7293(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x2CF12F9ACF18F048(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xD4D85E4148B638AD();
}

void func_43()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	
	iLocal_31 = 0;
	func_21();
	iVar13 = 0;
	while (iVar13 < 11)
	{
		if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		iVar14 = 0;
		iVar15 = 11;
		Global_2543383[iVar15 /*104*/].f_18 = -1;
		Global_2543383[iVar15 /*104*/].f_18.f_1 = 0;
		Global_2543383[iVar15 /*104*/].f_18.f_2 = 0;
		Global_2543383[iVar15 /*104*/].f_18.f_3 = 0;
		Global_2543383[iVar15 /*104*/].f_18.f_5 = 0;
		while (iVar14 < 12)
		{
			if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) == 0)
			{
				func_47();
			}
			if (iVar0[iVar14] == 0)
			{
				if (Global_2543383[iVar14 /*104*/].f_24 != 0)
				{
					if (Global_2543383[iVar14 /*104*/].f_99[Global_14393] == 1)
					{
						if (func_44(Global_2543383[iVar14 /*104*/].f_18, Global_2543383[iVar15 /*104*/].f_18))
						{
							iVar15 = iVar14;
							if (Global_2543383[iVar15 /*104*/].f_28 == 0)
							{
								iLocal_35 = 0;
							}
							else
							{
								iLocal_35 = 1;
							}
						}
					}
				}
			}
			iVar14++;
		}
		iLocal_18[iVar13] = iVar15;
		iVar0[iVar15] = 1;
		if (Global_2543383[iVar15 /*104*/].f_24 != 0)
		{
			if (Global_2543383[iVar15 /*104*/].f_99[Global_14393] == 1)
			{
				unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
				unk_0xA734310215BCF528(8);
				unk_0xA734310215BCF528(iVar13);
				unk_0xA734310215BCF528(iLocal_35);
				unk_0x58279158C52AF361(0);
				if (Global_2543383[iVar15 /*104*/].f_17 == 145)
				{
					unk_0x164FB269C22AF51C("CELL_2000");
					unk_0x54534D588C114163(&(Global_2543383[iVar15 /*104*/].f_50));
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					func_9(&(Global_97353.f_29774[Global_2543383[iVar15 /*104*/].f_17 /*29*/].f_3));
				}
				Var16 = { Global_2543383[iVar15 /*104*/] };
				StringConCat(&Var16, "_SUB", 64);
				func_9(&Var16);
				unk_0xD4D85E4148B638AD();
			}
		}
		if (Global_2543383[iVar13 /*104*/].f_24 != 0)
		{
			if (Global_2543383[iVar13 /*104*/].f_99[Global_14393] == 1)
			{
				iLocal_31++;
			}
		}
		iVar13++;
	}
}

int func_44(struct<6> Param0, struct<6> Param6)
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

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6EA2AC68E7C7293(uParam0, sParam1);
	unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD4D85E4148B638AD();
}

void func_46()
{
	StringCopy(&(Local_60[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_175[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_175[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_175[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_175[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_60[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_175[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_60[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_175[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_60[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_175[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_175[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_175[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_175[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_175[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_175[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_175[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_60[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_175[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_60[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_175[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_60[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_175[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_175[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_175[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_175[18 /*16*/]), "executiveproducer", 64);
}

void func_47()
{
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) == 0)
	{
		func_48(0);
	}
	if (iLocal_480)
	{
		unk_0x4ACA10A91F66F1E2(&Local_44);
	}
	Global_16726 = 0;
	Global_16725 = 0;
	unk_0x5E8B6D17FF91CD59();
}

void func_48(int iParam0)
{
	if (Global_14551)
	{
		func_50(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_49())
	{
		Global_14393.f_1 = 3;
	}
}

int func_49()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_51(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

