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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0[122];
	int iVar123;
	int iVar124;
	int iVar125;
	bool bVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	bool bVar133;
	bool bVar134;
	bool bVar135;
	int iVar136;
	bool bVar137;
	bool bVar138;
	int iVar139;
	
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
	if (unk_0x4B4BD87E3D30C50D(34))
	{
		func_67();
	}
	func_66();
	func_65();
	Global_36752 = 0;
	iVar123 = func_58();
	iVar124 = func_58();
	iVar125 = 2000;
	Global_36754 = 1;
	bVar126 = true;
	while (true)
	{
		iVar127 = 0;
		if (bVar126)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_99250.f_29439, (4 - 1)))
			{
				func_57(26);
				bVar126 = false;
			}
		}
		if (!Global_36753 && unk_0x3EAC9995EC220C5A() > Global_36251)
		{
			iVar127 = 0;
			while (iVar127 < 122)
			{
				if ((Global_40088[iVar127 /*46*/] && !Global_40088[iVar127 /*46*/].f_1) && !Global_40088[iVar127 /*46*/].f_45)
				{
					iVar0[iVar127] = (iVar0[iVar127] + iVar125);
					if (iVar0[iVar127] > Global_40088[iVar127 /*46*/].f_43)
					{
						if (func_33(7, 144, 2, -1, 0))
						{
							func_31(iVar127, 0);
							iVar0[iVar127] = 0;
							Global_36754 = 1;
						}
					}
				}
				unk_0x4EDE34FBADD967A6(0);
				iVar127++;
			}
			iVar123 = func_58();
			iVar128 = 0;
			iVar129 = 0;
			iVar130 = 0;
			func_19(iVar123, iVar124, &iVar129, &iVar129, &iVar128, &iVar129, &iVar129, &iVar129);
			if (iVar128 < 0)
			{
				iVar128 = (iVar128 * -1);
			}
			if (iVar128 > 0 && Global_14413.f_1 == 3)
			{
				iVar124 = iVar123;
				if (Global_47485 > 0)
				{
					iVar131 = Global_47485;
					iVar132 = 0;
					while (iVar131 != 0)
					{
						if ((Global_47486[iVar132 /*53*/].f_52 != 0 && iVar132 < 8) && Global_47486[iVar132 /*53*/].f_4)
						{
							Global_47486[iVar132 /*53*/].f_2 = (Global_47486[iVar132 /*53*/].f_2 - iVar128);
							bVar133 = false;
							bVar134 = false;
							bVar135 = false;
							iVar136 = 0;
							while (!bVar135)
							{
								if (Global_46063[iVar136 /*203*/].f_1 != Global_47486[iVar132 /*53*/].f_52)
								{
									iVar136++;
								}
								else
								{
									bVar134 = true;
									bVar135 = true;
								}
								if (iVar136 == 7)
								{
									bVar135 = true;
									Global_47486[iVar132 /*53*/].f_52 = 0;
									bVar133 = true;
								}
							}
							if (!bVar134)
							{
								bVar133 = true;
								Global_47486[iVar132 /*53*/].f_4 = 0;
							}
							else if (Global_47486[iVar132 /*53*/].f_2 < 1)
							{
								if (func_33(7, 145, 2, -1, 0))
								{
									bVar137 = false;
									if (Global_47486[iVar132 /*53*/].f_5 || Global_47486[iVar132 /*53*/].f_10 > 0)
									{
										bVar137 = true;
									}
									if (func_16(Global_47486[iVar132 /*53*/], Global_47486[iVar132 /*53*/].f_1, bVar137))
									{
										bVar138 = true;
										if (Global_47486[iVar132 /*53*/].f_10 > 0)
										{
											bVar138 = false;
										}
										if (Global_47486[iVar132 /*53*/].f_5)
										{
											func_15(Global_47486[iVar132 /*53*/], &(Global_47486[iVar132 /*53*/].f_6), bVar138);
										}
										if (Global_47486[iVar132 /*53*/].f_10 > 0)
										{
											iVar130 = 0;
											iVar130 = 0;
											while (iVar130 < Global_47486[iVar132 /*53*/].f_10)
											{
												func_14(Global_47486[iVar132 /*53*/], &(Global_47486[iVar132 /*53*/].f_11[iVar130 /*4*/]));
												iVar130++;
											}
										}
										if (bVar137 && !bVar138)
										{
											func_1(Global_47486[iVar132 /*53*/]);
										}
										func_57(Global_47486[iVar132 /*53*/]);
									}
									Global_47486[iVar132 /*53*/].f_52 = 0;
									Global_47486[iVar132 /*53*/].f_5 = 0;
									Global_47486[iVar132 /*53*/].f_2 = 0;
									bVar133 = true;
									Global_47486[iVar132 /*53*/].f_4 = 0;
								}
							}
							if (bVar133)
							{
								Global_47485 = (Global_47485 - 1);
							}
							iVar131 = (iVar131 - 1);
						}
						iVar132++;
						if (iVar132 == 8)
						{
							iVar131 = 0;
						}
						unk_0x4EDE34FBADD967A6(0);
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(iVar125);
		Global_36755 = 0;
		Global_36756 = 0;
		Global_36757 = 0;
		iVar139 = Global_45701[0 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_45701[0 /*120*/].f_69[iVar127])
			{
				Global_36755++;
			}
			iVar127++;
		}
		iVar139 = Global_45701[1 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_45701[1 /*120*/].f_69[iVar127])
			{
				Global_36756++;
			}
			iVar127++;
		}
		iVar139 = Global_45701[2 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_45701[2 /*120*/].f_69[iVar127])
			{
				Global_36757++;
			}
			iVar127++;
		}
		unk_0x4EDE34FBADD967A6(iVar125);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46063[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46063[iVar0 /*203*/].f_9 - 1);
	if (!Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_36763[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_2(1, Global_36763[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36763[iVar1 /*12*/].f_3)
		{
			case 0:
				func_2(0, Global_36763[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_2(1, Global_36763[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_2(2, Global_36763[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46063[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x7B8549A4F94FA4C8())
	{
		return;
	}
	iVar0 = func_6();
	bVar1 = false;
	StringCopy(&cVar2, func_5(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x2B8B3581C4E63AD1("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x2B8B3581C4E63AD1("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x2B8B3581C4E63AD1("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x2B8B3581C4E63AD1(sParam3);
				if (!unk_0x0AAC2160036975D9(iParam4))
				{
					unk_0x703D2B4B1C7E10B6(iParam4);
				}
				if (!unk_0x0AAC2160036975D9(iParam5))
				{
					unk_0x703D2B4B1C7E10B6(iParam5);
				}
				if (!unk_0x0AAC2160036975D9(iParam6))
				{
					unk_0x703D2B4B1C7E10B6(iParam6);
				}
				if (!unk_0x0AAC2160036975D9(iParam7))
				{
					unk_0x703D2B4B1C7E10B6(iParam7);
				}
				if (!unk_0x0AAC2160036975D9(iParam8))
				{
					unk_0x703D2B4B1C7E10B6(iParam8);
				}
				if (!unk_0x0AAC2160036975D9(iParam9))
				{
					unk_0x703D2B4B1C7E10B6(iParam9);
				}
				if (!unk_0x0AAC2160036975D9(iParam10))
				{
					unk_0x703D2B4B1C7E10B6(iParam10);
				}
				if (!unk_0x0AAC2160036975D9(iParam11))
				{
					unk_0x703D2B4B1C7E10B6(iParam11);
				}
				if (!unk_0x0AAC2160036975D9(iParam12))
				{
					unk_0x703D2B4B1C7E10B6(iParam12);
				}
				if (!unk_0x0AAC2160036975D9(iParam13))
				{
					unk_0x703D2B4B1C7E10B6(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_3(unk_0xEF85B88DC049EA23(&cVar2, &cVar2, 0, 2, unk_0x366B33759CCFE37B(func_4(iParam1)), 0));
		}
		else
		{
			func_3(unk_0xEF85B88DC049EA23("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x366B33759CCFE37B(func_4(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36755++;
				if (Global_36755 > 16)
				{
					Global_36755 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36757++;
				if (Global_36757 > 16)
				{
					Global_36757 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36756++;
				if (Global_36756 > 16)
				{
					Global_36756 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xBBEB613A917D7EE8(-1, "Notification", &Global_14402, 1);
	}
}

void func_3(var uParam0)
{
	Global_36758[Global_36762] = uParam0;
	Global_16770 = 1;
	Global_16769 = uParam0;
	Global_36762++;
	if (Global_36762 == 3)
	{
		Global_36762 = 0;
	}
}

char* func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_5(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[0 /*29*/].f_7));
		
		case 1:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[1 /*29*/].f_7));
		
		case 2:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[2 /*29*/].f_7));
		
		case 7:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[12 /*29*/].f_7));
		
		case 4:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[60 /*29*/].f_7));
		
		case 6:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[62 /*29*/].f_7));
		
		case 3:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[14 /*29*/].f_7));
		
		case 16:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[97 /*29*/].f_7));
		
		case 19:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[99 /*29*/].f_7));
		
		case 15:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[15 /*29*/].f_7));
		
		case 26:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[30 /*29*/].f_7));
		
		case 27:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[17 /*29*/].f_7));
		
		case 29:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[20 /*29*/].f_7));
		
		case 30:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[43 /*29*/].f_7));
		
		case 31:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[44 /*29*/].f_7));
		
		case 32:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[19 /*29*/].f_7));
		
		case 34:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[40 /*29*/].f_7));
		
		case 36:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[22 /*29*/].f_7));
		
		case 38:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[122 /*29*/].f_7));
		
		case 40:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[125 /*29*/].f_7));
		
		case 41:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[113 /*29*/].f_7));
		
		case 42:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[126 /*29*/].f_7));
		
		case 43:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[127 /*29*/].f_7));
		
		case 44:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[124 /*29*/].f_7));
		
		case 45:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[114 /*29*/].f_7));
		
		case 46:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[115 /*29*/].f_7));
		
		case 47:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[116 /*29*/].f_7));
		
		case 48:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[123 /*29*/].f_7));
		
		case 49:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[117 /*29*/].f_7));
		
		case 50:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[118 /*29*/].f_7));
		
		case 51:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[119 /*29*/].f_7));
		
		case 52:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[120 /*29*/].f_7));
		
		case 53:
			return unk_0x366B33759CCFE37B(&(Global_99250.f_32503[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

int func_6()
{
	func_7();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_7()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_11(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_10(unk_0x77F050A399DB77ED());
			if (func_9(iVar0) && (!func_8(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_9(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_8(int iParam0)
{
	return Global_35700 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

struct<16> func_12(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46063[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46063[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46063[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_14(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46063[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_15(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46063[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_46063[iVar0 /*203*/].f_10[(Global_46063[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_18(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46063[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46063[iVar0 /*203*/].f_2 = iParam0;
	Global_46063[iVar0 /*203*/].f_10[Global_46063[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46063[iVar0 /*203*/].f_10[Global_46063[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46063[iVar0 /*203*/].f_10[Global_46063[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46063[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46063[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46063[iVar0 /*203*/].f_4[iVar1] == Global_36763[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46063[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46063[iVar0 /*203*/].f_4[Global_46063[iVar0 /*203*/].f_3] = Global_36763[iParam1 /*12*/].f_3;
			Global_46063[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46063[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46063[iVar0 /*203*/].f_4[iVar1] == Global_36763[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46063[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46063[iVar0 /*203*/].f_4[Global_46063[iVar0 /*203*/].f_3] = Global_36763[iParam1 /*12*/].f_2;
			Global_46063[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46063[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46063[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_17(Global_46063[iVar0 /*203*/].f_4[iVar1], Global_46063[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_40088[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40088[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_12(Global_36763[iVar20 /*12*/].f_1) };
		if (Global_36763[iVar20 /*12*/].f_2 == iParam0 && !Global_36763[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36763[iVar20 /*12*/].f_2;
		iVar0 = Global_45701[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45701[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36755 = (Global_36755 - 1);
						if (Global_36755 < 0)
						{
							Global_36755 = 0;
						}
						break;
					
					case 1:
						Global_36756 = (Global_36756 - 1);
						if (Global_36756 < 0)
						{
							Global_36756 = 0;
						}
						break;
					
					case 2:
						Global_36757 = (Global_36757 - 1);
						if (Global_36757 < 0)
						{
							Global_36757 = 0;
						}
						break;
					}
				}
		}
		Global_45701[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45701[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45701[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45701[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45701[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45701[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45701[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45701[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36755 = (Global_36755 - 1);
						if (Global_36755 < 0)
						{
							Global_36755 = 0;
						}
						break;
					
					case 1:
						Global_36756 = (Global_36756 - 1);
						if (Global_36756 < 0)
						{
							Global_36756 = 0;
						}
						break;
					
					case 2:
						Global_36757 = (Global_36757 - 1);
						if (Global_36757 < 0)
						{
							Global_36757 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_46063[iVar24 /*203*/].f_1 == iParam1 && Global_46063[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45701[iParam0 /*120*/].f_18[iVar0] = Global_46063[iVar23 /*203*/].f_1;
		Global_45701[iParam0 /*120*/].f_1[iVar0] = (Global_46063[iVar23 /*203*/].f_9 - 1);
		Global_45701[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45701[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45701[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45701[iParam0 /*120*/]++;
		iVar25 = Global_45701[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46063[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36763[iVar26 /*12*/].f_2;
		if (Global_46063[iVar23 /*203*/].f_10[(Global_46063[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46063[iVar23 /*203*/].f_10[(Global_46063[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_36763[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45701[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_2(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_2(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_2(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46063[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46063[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46063[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46063[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46063[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46063[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46063[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46063[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45701[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45701[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45701[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45701[iVar6 /*120*/].f_18[iVar8] == Global_46063[iVar4 /*203*/].f_1)
							{
								if (Global_45701[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36755 = (Global_36755 - 1);
											break;
										
										case 1:
											Global_36756 = (Global_36756 - 1);
											break;
										
										case 2:
											Global_36757 = (Global_36757 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46063[iVar4 /*203*/].f_2 = iParam0;
	Global_46063[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46063[iVar4 /*203*/] = 1;
	}
	Global_99250.f_25490.f_310++;
	if (Global_99250.f_25490.f_310 == 0)
	{
		Global_99250.f_25490.f_310 = 1;
	}
	Global_46063[iVar4 /*203*/].f_1 = Global_99250.f_25490.f_310;
	Global_46063[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_19(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_29(iParam0, iParam1))
	{
		iVar0 = func_28(iParam1);
		iVar1 = func_26(iParam0);
		iVar2 = (func_26(iParam0) - func_26(iParam1));
		iVar3 = (func_28(iParam0) - func_28(iParam1));
		iVar4 = (func_25(iParam0) - func_25(iParam1));
		iVar5 = (func_24(iParam0) - func_24(iParam1));
		iVar6 = (func_23(iParam0) - func_23(iParam1));
		iVar7 = (func_22(iParam0) - func_22(iParam1));
	}
	else
	{
		iVar0 = func_28(iParam0);
		iVar1 = func_26(iParam1);
		iVar2 = (func_26(iParam1) - func_26(iParam0));
		iVar3 = (func_28(iParam1) - func_28(iParam0));
		iVar4 = (func_25(iParam1) - func_25(iParam0));
		iVar5 = (func_24(iParam1) - func_24(iParam0));
		iVar6 = (func_23(iParam1) - func_23(iParam0));
		iVar7 = (func_22(iParam1) - func_22(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_21(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_20(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_20(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_22(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_23(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_24(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_25(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_26(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_27(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_27(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_28(int iParam0)
{
	return iParam0 & 15;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_30(iParam1) || !func_30(iParam0))
	{
		return 1;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_23(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_24(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_26(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_28(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_25(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_31(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40088[iParam0 /*46*/] && !Global_40088[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_40088[iParam0 /*46*/].f_31 == Global_40088[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_40088[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_36763[Global_40088[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_40088[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_40088[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_40088[iParam0 /*46*/].f_8[Global_40088[iParam0 /*46*/].f_31];
	Global_40088[iParam0 /*46*/].f_31++;
	func_32(iParam0, iVar1);
	Global_40088[iParam0 /*46*/].f_45 = Global_36763[iVar1 /*12*/].f_10;
	Global_40088[iParam0 /*46*/].f_43 = Global_36763[iVar1 /*12*/].f_11;
	iVar2 = Global_40088[iParam0 /*46*/].f_2;
	func_17(Global_36763[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_40088[iParam0 /*46*/].f_3[iVar3] != Global_36763[iVar1 /*12*/].f_2 && Global_40088[iParam0 /*46*/].f_3[iVar3] != Global_36763[iVar1 /*12*/].f_3)
		{
			func_17(Global_40088[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_40088[iParam0 /*46*/].f_31 == Global_40088[iParam0 /*46*/].f_30)
	{
		if (Global_36763[Global_40088[iParam0 /*46*/].f_32[(Global_40088[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_40088[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

int func_32(int iParam0, var uParam1)
{
	if (Global_40088[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_40088[iParam0 /*46*/].f_32[Global_40088[iParam0 /*46*/].f_42] = uParam1;
	Global_40088[iParam0 /*46*/].f_42++;
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar22[2];
	int iVar25;
	int iVar26;
	int iVar27;
	
	if (!unk_0x398F615441F52A47())
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) != -1)
		{
			return 0;
		}
	}
	if (unk_0x1066B6347C40B301())
	{
		return 0;
	}
	if (func_55() && iParam2 < 4)
	{
		return 0;
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (func_53(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xB56FEBC510E7E9DE(iParam0, func_52()) && !unk_0xB56FEBC510E7E9DE(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_69315)
	{
		return 0;
	}
	if (unk_0x7B8549A4F94FA4C8())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (Global_87446)
	{
		return 0;
	}
	if ((func_51() || (Global_17118.f_4 && Global_17118.f_104 == 4)) || func_50())
	{
		return 0;
	}
	if (unk_0xB56FEBC510E7E9DE(iParam4, 18))
	{
		if (!unk_0xB56FEBC510E7E9DE(iParam0, func_52()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 1)
		{
			return 0;
		}
		if (unk_0xF8E586402C7A2888())
		{
			return 0;
		}
		if (Global_88367)
		{
			return 0;
		}
		if (func_43(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (unk_0xB56FEBC510E7E9DE(iParam0, func_52()))
			{
				iVar1 = func_42(func_6());
				iVar2 = func_42(iParam1);
				iVar3 = func_41(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_99250.f_16721.f_175[iVar3 /*19*/].f_8 == 1 || Global_99250.f_16721.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (func_40(&(Global_99250.f_16721.f_175[iVar3 /*19*/].f_5)))
						{
							if (func_37(&(Global_99250.f_16721.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 2)
	{
		return 0;
	}
	if (func_36())
	{
		return 0;
	}
	if (unk_0xB56FEBC510E7E9DE(iParam4, 3))
	{
		if (Global_98297)
		{
			return 0;
		}
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
			{
				return 0;
			}
		}
		if (Global_97962.f_19 != 0)
		{
			return 0;
		}
		if (Global_35700 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_35(unk_0x77F050A399DB77ED(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		unk_0xC153C0A3AB834C19(unk_0x77F050A399DB77ED(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = func_11(1);
						iVar22[1] = func_11(2);
						break;
					
					case 1:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(2);
						break;
					
					case 2:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = func_11(1);
				iVar22[1] = func_11(2);
				break;
			
			case 6:
				iVar22[0] = func_34(12);
				iVar22[1] = func_11(1);
				break;
			
			case 7:
				iVar22[0] = func_34(12);
				iVar22[1] = func_11(0);
				break;
			
			case 8:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(1);
				break;
			
			case 9:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(2);
				break;
			
			case 10:
				iVar22[0] = func_34(23);
				iVar22[1] = func_11(0);
				break;
			
			case 11:
				iVar22[0] = func_34(23);
				iVar22[1] = func_11(0);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar22[0] = func_11(iParam1);
				}
				else
				{
					iVar22[0] = func_34(iParam1);
				}
				iVar22[1] = 0;
				break;
		}
		iVar25 = 0;
		while (iVar25 < 2)
		{
			if (iVar22[iVar25] != 0)
			{
				iVar26 = 0;
				while (iVar26 < 16)
				{
					if (unk_0x1F2158D615BC4B25(uVar5[iVar26]))
					{
						if (unk_0xDF1398076E26B0E4(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!unk_0x0B6E83A9A7ED3EBA(uVar5[iVar26]))
							{
								if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
								{
									if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(uVar5[iVar26], 1), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_88917[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_88917[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_88917[2];
						break;
				}
				if (unk_0x1F2158D615BC4B25(iVar27))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(iVar27, 1), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_91096[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_91096[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_91096[2];
						break;
				}
				if (unk_0x1F2158D615BC4B25(iVar27))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(iVar27, 1), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_34(int iParam0)
{
	if (!func_9(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_35(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;
	float fVar5;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { Global_35701[iParam1 /*5*/] };
		fVar5 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar5 = fParam2;
		}
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam0, 1), Var0, 1) < fVar5)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_35(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_36()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

float func_37(var uParam0)
{
	if (func_40(uParam0))
	{
		if (func_39(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_38(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_38(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		iVar0 = unk_0xE23D71F521207E8D();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
}

bool func_39(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 2);
}

bool func_40(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 1);
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_42(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_99250.f_32503[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

int func_43(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		iVar36 = func_49();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 2) && !unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 3))
			{
				func_44(iVar32, &Var0);
				fVar35 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var0.f_6, 1);
				if (fVar35 < fVar34)
				{
					bVar38 = true;
					if (bParam1)
					{
						if (iVar36 != Var0.f_26)
						{
							bVar38 = false;
						}
					}
					if (bVar38)
					{
						iVar33 = iVar32;
						fVar34 = fVar35;
					}
				}
			}
			iVar37++;
		}
	}
	return iVar33;
}

void func_44(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_45(uParam1, "Abigail1", func_47(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 1:
			func_45(uParam1, "Abigail2", func_47(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 2:
			func_45(uParam1, "Barry1", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 3:
			func_45(uParam1, "Barry2", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 4:
			func_45(uParam1, "Barry3", func_47(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 5:
			func_45(uParam1, "Barry3A", func_47(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 6:
			func_45(uParam1, "Barry3C", func_47(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 7:
			func_45(uParam1, "Barry4", func_47(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_46(iParam0), 0, 0);
			break;
		
		case 8:
			func_45(uParam1, "Dreyfuss1", func_47(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 9:
			func_45(uParam1, "Epsilon1", func_47(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 10:
			func_45(uParam1, "Epsilon2", func_47(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 11:
			func_45(uParam1, "Epsilon3", func_47(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 12:
			func_45(uParam1, "Epsilon4", func_47(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 13:
			func_45(uParam1, "Epsilon5", func_47(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 14:
			func_45(uParam1, "Epsilon6", func_47(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 15:
			func_45(uParam1, "Epsilon7", func_47(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 16:
			func_45(uParam1, "Epsilon8", func_47(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 17:
			func_45(uParam1, "Extreme1", func_47(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 18:
			func_45(uParam1, "Extreme2", func_47(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 19:
			func_45(uParam1, "Extreme3", func_47(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 20:
			func_45(uParam1, "Extreme4", func_47(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 21:
			func_45(uParam1, "Fanatic1", func_47(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 22:
			func_45(uParam1, "Fanatic2", func_47(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 23:
			func_45(uParam1, "Fanatic3", func_47(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_46(iParam0), 0, 1);
			break;
		
		case 24:
			func_45(uParam1, "Hao1", func_47(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_46(iParam0), 0, 1);
			break;
		
		case 25:
			func_45(uParam1, "Hunting1", func_47(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 26:
			func_45(uParam1, "Hunting2", func_47(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 27:
			func_45(uParam1, "Josh1", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 28:
			func_45(uParam1, "Josh2", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 29:
			func_45(uParam1, "Josh3", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 30:
			func_45(uParam1, "Josh4", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 31:
			func_45(uParam1, "Maude1", func_47(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 32:
			func_45(uParam1, "Minute1", func_47(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 33:
			func_45(uParam1, "Minute2", func_47(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 34:
			func_45(uParam1, "Minute3", func_47(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 35:
			func_45(uParam1, "MrsPhilips1", func_47(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 36:
			func_45(uParam1, "MrsPhilips2", func_47(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 37:
			func_45(uParam1, "Nigel1", func_47(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 38:
			func_45(uParam1, "Nigel1A", func_47(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 39:
			func_45(uParam1, "Nigel1B", func_47(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 40:
			func_45(uParam1, "Nigel1C", func_47(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 41:
			func_45(uParam1, "Nigel1D", func_47(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 42:
			func_45(uParam1, "Nigel2", func_47(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 43:
			func_45(uParam1, "Nigel3", func_47(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 44:
			func_45(uParam1, "Omega1", func_47(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 45:
			func_45(uParam1, "Omega2", func_47(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 46:
			func_45(uParam1, "Paparazzo1", func_47(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 47:
			func_45(uParam1, "Paparazzo2", func_47(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 48:
			func_45(uParam1, "Paparazzo3", func_47(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 49:
			func_45(uParam1, "Paparazzo3A", func_47(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 50:
			func_45(uParam1, "Paparazzo3B", func_47(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 51:
			func_45(uParam1, "Paparazzo4", func_47(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 52:
			func_45(uParam1, "Rampage1", func_47(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 54:
			func_45(uParam1, "Rampage3", func_47(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 55:
			func_45(uParam1, "Rampage4", func_47(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 56:
			func_45(uParam1, "Rampage5", func_47(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 53:
			func_45(uParam1, "Rampage2", func_47(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 57:
			func_45(uParam1, "TheLastOne", func_47(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 58:
			func_45(uParam1, "Tonya1", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 59:
			func_45(uParam1, "Tonya2", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 60:
			func_45(uParam1, "Tonya3", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 61:
			func_45(uParam1, "Tonya4", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 62:
			func_45(uParam1, "Tonya5", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_45(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_47(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_48(iParam0) };
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_48(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_49()
{
	func_7();
	switch (Global_99250.f_1754.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_50()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

var func_52()
{
	func_7();
	return Global_99250.f_1754.f_539.f_3549;
}

int func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_54(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55()
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	return 1;
}

int func_56()
{
	if (Global_14413.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_29439, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46063[iVar0 /*203*/] = 0;
}

var func_58()
{
	var uVar0;
	
	func_64(&uVar0, unk_0x624CC88A8815545E());
	func_63(&uVar0, unk_0xD3D98375D5CA69E4());
	func_62(&uVar0, unk_0x5C5157A539753532());
	func_61(&uVar0, unk_0xCB12BC5A618B995B());
	func_60(&uVar0, unk_0x9746D90F14C930B9());
	func_59(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_61(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(*uParam0);
	iVar1 = func_26(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_62(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_63(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_64(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_45701[iVar0 /*120*/] = Global_99250.f_25490[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_45701[iVar0 /*120*/].f_1[iVar1] = Global_99250.f_25490[iVar0 /*103*/].f_1[iVar1];
			Global_45701[iVar0 /*120*/].f_18[iVar1] = Global_99250.f_25490[iVar0 /*103*/].f_18[iVar1];
			Global_45701[iVar0 /*120*/].f_35[iVar1] = Global_99250.f_25490[iVar0 /*103*/].f_35[iVar1];
			Global_45701[iVar0 /*120*/].f_52[iVar1] = Global_99250.f_25490[iVar0 /*103*/].f_52[iVar1];
			Global_45701[iVar0 /*120*/].f_69[iVar1] = Global_99250.f_25490[iVar0 /*103*/].f_69[iVar1];
			Global_45701[iVar0 /*120*/].f_86[iVar1] = Global_99250.f_25490[iVar0 /*103*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_46063[iVar0 /*203*/].f_2 = Global_99250.f_25490.f_311[iVar0 /*203*/];
		Global_46063[iVar0 /*203*/] = Global_99250.f_25490.f_311[iVar0 /*203*/].f_2;
		Global_46063[iVar0 /*203*/].f_3 = Global_99250.f_25490.f_311[iVar0 /*203*/].f_3;
		Global_46063[iVar0 /*203*/].f_1 = Global_99250.f_25490.f_311[iVar0 /*203*/].f_1;
		Global_46063[iVar0 /*203*/].f_9 = Global_99250.f_25490.f_311[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_46063[iVar0 /*203*/].f_4[iVar1] = Global_99250.f_25490.f_311[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_46063[iVar0 /*203*/].f_10[iVar1 /*48*/] = Global_99250.f_25490.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/];
			Global_46063[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1 = Global_99250.f_25490.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1;
			Global_46063[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 = { Global_99250.f_25490.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 };
			Global_46063[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6 = Global_99250.f_25490.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_46063[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_99250.f_25490.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_40088[iVar0 /*46*/] = Global_99250.f_25490.f_1733[iVar0 /*14*/];
		Global_40088[iVar0 /*46*/].f_1 = Global_99250.f_25490.f_1733[iVar0 /*14*/].f_1;
		Global_40088[iVar0 /*46*/].f_45 = Global_99250.f_25490.f_1733[iVar0 /*14*/].f_2;
		Global_40088[iVar0 /*46*/].f_31 = Global_99250.f_25490.f_1733[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_99250.f_25490.f_1733[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_40088[iVar0 /*46*/].f_32[iVar1] = (Global_99250.f_25490.f_1733[iVar0 /*14*/].f_4[iVar1] - 1);
				Global_40088[iVar0 /*46*/].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_47485 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_47486[iVar0 /*53*/] = Global_99250.f_25490.f_3442[iVar0 /*53*/];
		Global_47486[iVar0 /*53*/].f_1 = Global_99250.f_25490.f_3442[iVar0 /*53*/].f_1;
		Global_47486[iVar0 /*53*/].f_2 = Global_99250.f_25490.f_3442[iVar0 /*53*/].f_2;
		Global_47486[iVar0 /*53*/].f_5 = Global_99250.f_25490.f_3442[iVar0 /*53*/].f_5;
		Global_47486[iVar0 /*53*/].f_6 = { Global_99250.f_25490.f_3442[iVar0 /*53*/].f_6 };
		Global_47486[iVar0 /*53*/].f_10 = Global_99250.f_25490.f_3442[iVar0 /*53*/].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_47486[iVar0 /*53*/].f_11[iVar1 /*4*/] = { Global_99250.f_25490.f_3442[iVar0 /*53*/].f_11[iVar1 /*4*/] };
			iVar1++;
		}
		Global_47486[iVar0 /*53*/].f_52 = Global_99250.f_25490.f_3442[iVar0 /*53*/].f_52;
		if (Global_47486[iVar0 /*53*/].f_52 != 0)
		{
			Global_47485++;
		}
		iVar0++;
	}
}

void func_66()
{
	Global_36763[0 /*12*/] = 15;
	Global_36763[0 /*12*/].f_1 = 16;
	Global_36763[0 /*12*/].f_2 = 4;
	Global_36763[0 /*12*/].f_3 = 0;
	Global_36763[0 /*12*/].f_10 = 1;
	Global_36763[0 /*12*/].f_11 = 0;
	Global_36763[0 /*12*/].f_4 = 0;
	Global_36763[1 /*12*/] = 17;
	Global_36763[1 /*12*/].f_1 = 16;
	Global_36763[1 /*12*/].f_2 = 4;
	Global_36763[1 /*12*/].f_3 = 0;
	Global_36763[1 /*12*/].f_10 = 1;
	Global_36763[1 /*12*/].f_11 = 0;
	Global_36763[1 /*12*/].f_4 = 0;
	Global_36763[2 /*12*/] = 18;
	Global_36763[2 /*12*/].f_1 = 16;
	Global_36763[2 /*12*/].f_2 = 4;
	Global_36763[2 /*12*/].f_3 = 0;
	Global_36763[2 /*12*/].f_10 = 1;
	Global_36763[2 /*12*/].f_11 = 0;
	Global_36763[2 /*12*/].f_4 = 0;
	Global_36763[3 /*12*/] = 19;
	Global_36763[3 /*12*/].f_1 = 16;
	Global_36763[3 /*12*/].f_2 = 4;
	Global_36763[3 /*12*/].f_3 = 0;
	Global_36763[3 /*12*/].f_10 = 1;
	Global_36763[3 /*12*/].f_11 = 0;
	Global_36763[3 /*12*/].f_4 = 0;
	Global_36763[4 /*12*/] = 20;
	Global_36763[4 /*12*/].f_1 = 16;
	Global_36763[4 /*12*/].f_2 = 4;
	Global_36763[4 /*12*/].f_3 = 0;
	Global_36763[4 /*12*/].f_10 = 1;
	Global_36763[4 /*12*/].f_11 = 0;
	Global_36763[4 /*12*/].f_4 = 0;
	Global_36763[5 /*12*/] = 21;
	Global_36763[5 /*12*/].f_1 = 16;
	Global_36763[5 /*12*/].f_2 = 4;
	Global_36763[5 /*12*/].f_3 = 0;
	Global_36763[5 /*12*/].f_10 = 1;
	Global_36763[5 /*12*/].f_11 = 0;
	Global_36763[5 /*12*/].f_4 = 0;
	Global_36763[6 /*12*/] = 22;
	Global_36763[6 /*12*/].f_1 = 16;
	Global_36763[6 /*12*/].f_2 = 4;
	Global_36763[6 /*12*/].f_3 = 0;
	Global_36763[6 /*12*/].f_10 = 0;
	Global_36763[6 /*12*/].f_11 = 0;
	Global_36763[6 /*12*/].f_4 = 0;
	Global_36763[7 /*12*/] = 23;
	Global_36763[7 /*12*/].f_1 = 24;
	Global_36763[7 /*12*/].f_2 = 4;
	Global_36763[7 /*12*/].f_3 = 0;
	Global_36763[7 /*12*/].f_10 = 0;
	Global_36763[7 /*12*/].f_11 = 0;
	Global_36763[7 /*12*/].f_4 = 0;
	Global_36763[8 /*12*/] = 25;
	Global_36763[8 /*12*/].f_1 = 26;
	Global_36763[8 /*12*/].f_2 = 4;
	Global_36763[8 /*12*/].f_3 = 0;
	Global_36763[8 /*12*/].f_10 = 0;
	Global_36763[8 /*12*/].f_11 = 0;
	Global_36763[8 /*12*/].f_4 = 0;
	Global_36763[9 /*12*/] = 27;
	Global_36763[9 /*12*/].f_1 = 28;
	Global_36763[9 /*12*/].f_2 = 4;
	Global_36763[9 /*12*/].f_3 = 0;
	Global_36763[9 /*12*/].f_10 = 0;
	Global_36763[9 /*12*/].f_11 = 0;
	Global_36763[9 /*12*/].f_4 = 0;
	Global_36763[10 /*12*/] = 32;
	Global_36763[10 /*12*/].f_1 = 33;
	Global_36763[10 /*12*/].f_2 = 5;
	Global_36763[10 /*12*/].f_3 = 0;
	Global_36763[10 /*12*/].f_10 = 0;
	Global_36763[10 /*12*/].f_11 = 0;
	Global_36763[10 /*12*/].f_4 = 0;
	Global_36763[11 /*12*/] = 34;
	Global_36763[11 /*12*/].f_1 = 35;
	Global_36763[11 /*12*/].f_2 = 5;
	Global_36763[11 /*12*/].f_3 = 0;
	Global_36763[11 /*12*/].f_10 = 0;
	Global_36763[11 /*12*/].f_11 = 0;
	Global_36763[11 /*12*/].f_4 = 0;
	Global_36763[12 /*12*/] = 42;
	Global_36763[12 /*12*/].f_1 = 43;
	Global_36763[12 /*12*/].f_2 = 7;
	Global_36763[12 /*12*/].f_3 = 1;
	Global_36763[12 /*12*/].f_10 = 0;
	Global_36763[12 /*12*/].f_11 = 0;
	Global_36763[12 /*12*/].f_4 = 0;
	Global_36763[13 /*12*/] = 44;
	Global_36763[13 /*12*/].f_1 = 45;
	Global_36763[13 /*12*/].f_2 = 7;
	Global_36763[13 /*12*/].f_3 = 1;
	Global_36763[13 /*12*/].f_10 = 0;
	Global_36763[13 /*12*/].f_11 = 0;
	Global_36763[13 /*12*/].f_4 = 0;
	Global_36763[14 /*12*/] = 46;
	Global_36763[14 /*12*/].f_1 = 47;
	Global_36763[14 /*12*/].f_2 = 7;
	Global_36763[14 /*12*/].f_3 = 1;
	Global_36763[14 /*12*/].f_10 = 0;
	Global_36763[14 /*12*/].f_11 = 0;
	Global_36763[14 /*12*/].f_4 = 0;
	Global_36763[15 /*12*/] = 48;
	Global_36763[15 /*12*/].f_1 = 49;
	Global_36763[15 /*12*/].f_2 = 7;
	Global_36763[15 /*12*/].f_3 = 1;
	Global_36763[15 /*12*/].f_10 = 0;
	Global_36763[15 /*12*/].f_11 = 0;
	Global_36763[15 /*12*/].f_4 = 0;
	Global_36763[16 /*12*/] = 50;
	Global_36763[16 /*12*/].f_1 = 51;
	Global_36763[16 /*12*/].f_2 = 4;
	Global_36763[16 /*12*/].f_3 = 0;
	Global_36763[16 /*12*/].f_10 = 0;
	Global_36763[16 /*12*/].f_11 = 0;
	Global_36763[16 /*12*/].f_4 = 0;
	Global_36763[17 /*12*/] = 61;
	Global_36763[17 /*12*/].f_1 = 62;
	Global_36763[17 /*12*/].f_2 = 8;
	Global_36763[17 /*12*/].f_3 = 0;
	Global_36763[17 /*12*/].f_10 = 1;
	Global_36763[17 /*12*/].f_11 = 0;
	Global_36763[17 /*12*/].f_4 = 0;
	Global_36763[18 /*12*/] = 63;
	Global_36763[18 /*12*/].f_1 = 64;
	Global_36763[18 /*12*/].f_2 = 9;
	Global_36763[18 /*12*/].f_3 = 1;
	Global_36763[18 /*12*/].f_10 = 1;
	Global_36763[18 /*12*/].f_11 = 0;
	Global_36763[18 /*12*/].f_4 = 0;
	Global_36763[19 /*12*/] = 61;
	Global_36763[19 /*12*/].f_1 = 65;
	Global_36763[19 /*12*/].f_2 = 8;
	Global_36763[19 /*12*/].f_3 = 0;
	Global_36763[19 /*12*/].f_10 = 1;
	Global_36763[19 /*12*/].f_11 = 0;
	Global_36763[19 /*12*/].f_4 = 0;
	Global_36763[20 /*12*/] = 61;
	Global_36763[20 /*12*/].f_1 = 66;
	Global_36763[20 /*12*/].f_2 = 8;
	Global_36763[20 /*12*/].f_3 = 0;
	Global_36763[20 /*12*/].f_10 = 1;
	Global_36763[20 /*12*/].f_11 = 0;
	Global_36763[20 /*12*/].f_4 = 0;
	Global_36763[21 /*12*/] = 61;
	Global_36763[21 /*12*/].f_1 = 67;
	Global_36763[21 /*12*/].f_2 = 8;
	Global_36763[21 /*12*/].f_3 = 0;
	Global_36763[21 /*12*/].f_10 = 1;
	Global_36763[21 /*12*/].f_11 = 0;
	Global_36763[21 /*12*/].f_4 = 0;
	Global_36763[22 /*12*/] = 61;
	Global_36763[22 /*12*/].f_1 = 68;
	Global_36763[22 /*12*/].f_2 = 8;
	Global_36763[22 /*12*/].f_3 = 0;
	Global_36763[22 /*12*/].f_10 = 0;
	Global_36763[22 /*12*/].f_11 = 0;
	Global_36763[22 /*12*/].f_4 = 0;
	Global_36763[23 /*12*/] = 69;
	Global_36763[23 /*12*/].f_1 = 70;
	Global_36763[23 /*12*/].f_2 = 10;
	Global_36763[23 /*12*/].f_3 = 2;
	Global_36763[23 /*12*/].f_10 = 1;
	Global_36763[23 /*12*/].f_11 = 0;
	Global_36763[23 /*12*/].f_4 = 0;
	Global_36763[24 /*12*/] = 63;
	Global_36763[24 /*12*/].f_1 = 74;
	Global_36763[24 /*12*/].f_2 = 9;
	Global_36763[24 /*12*/].f_3 = 1;
	Global_36763[24 /*12*/].f_10 = 1;
	Global_36763[24 /*12*/].f_11 = 0;
	Global_36763[24 /*12*/].f_4 = 0;
	Global_36763[25 /*12*/] = 63;
	Global_36763[25 /*12*/].f_1 = 75;
	Global_36763[25 /*12*/].f_2 = 9;
	Global_36763[25 /*12*/].f_3 = 1;
	Global_36763[25 /*12*/].f_10 = 1;
	Global_36763[25 /*12*/].f_11 = 0;
	Global_36763[25 /*12*/].f_4 = 0;
	Global_36763[26 /*12*/] = 63;
	Global_36763[26 /*12*/].f_1 = 76;
	Global_36763[26 /*12*/].f_2 = 9;
	Global_36763[26 /*12*/].f_3 = 1;
	Global_36763[26 /*12*/].f_10 = 1;
	Global_36763[26 /*12*/].f_11 = 0;
	Global_36763[26 /*12*/].f_4 = 0;
	Global_36763[27 /*12*/] = 63;
	Global_36763[27 /*12*/].f_1 = 77;
	Global_36763[27 /*12*/].f_2 = 9;
	Global_36763[27 /*12*/].f_3 = 1;
	Global_36763[27 /*12*/].f_10 = 0;
	Global_36763[27 /*12*/].f_11 = 0;
	Global_36763[27 /*12*/].f_4 = 0;
	Global_36763[28 /*12*/] = 69;
	Global_36763[28 /*12*/].f_1 = 73;
	Global_36763[28 /*12*/].f_2 = 10;
	Global_36763[28 /*12*/].f_3 = 2;
	Global_36763[28 /*12*/].f_10 = 1;
	Global_36763[28 /*12*/].f_11 = 0;
	Global_36763[28 /*12*/].f_4 = 0;
	Global_36763[29 /*12*/] = 69;
	Global_36763[29 /*12*/].f_1 = 72;
	Global_36763[29 /*12*/].f_2 = 10;
	Global_36763[29 /*12*/].f_3 = 2;
	Global_36763[29 /*12*/].f_10 = 1;
	Global_36763[29 /*12*/].f_11 = 0;
	Global_36763[29 /*12*/].f_4 = 0;
	Global_36763[30 /*12*/] = 69;
	Global_36763[30 /*12*/].f_1 = 71;
	Global_36763[30 /*12*/].f_2 = 10;
	Global_36763[30 /*12*/].f_3 = 2;
	Global_36763[30 /*12*/].f_10 = 0;
	Global_36763[30 /*12*/].f_11 = 0;
	Global_36763[30 /*12*/].f_4 = 0;
	Global_36763[31 /*12*/] = 90;
	Global_36763[31 /*12*/].f_1 = 91;
	Global_36763[31 /*12*/].f_2 = 11;
	Global_36763[31 /*12*/].f_3 = 1;
	Global_36763[31 /*12*/].f_10 = 0;
	Global_36763[31 /*12*/].f_11 = 0;
	Global_36763[31 /*12*/].f_4 = 0;
	Global_36763[32 /*12*/] = 90;
	Global_36763[32 /*12*/].f_1 = 92;
	Global_36763[32 /*12*/].f_2 = 11;
	Global_36763[32 /*12*/].f_3 = 0;
	Global_36763[32 /*12*/].f_10 = 0;
	Global_36763[32 /*12*/].f_11 = 0;
	Global_36763[32 /*12*/].f_4 = 0;
	Global_36763[33 /*12*/] = 90;
	Global_36763[33 /*12*/].f_1 = 93;
	Global_36763[33 /*12*/].f_2 = 11;
	Global_36763[33 /*12*/].f_3 = 2;
	Global_36763[33 /*12*/].f_10 = 0;
	Global_36763[33 /*12*/].f_11 = 0;
	Global_36763[33 /*12*/].f_4 = 0;
	Global_36763[34 /*12*/] = 94;
	Global_36763[34 /*12*/].f_1 = 95;
	Global_36763[34 /*12*/].f_2 = 13;
	Global_36763[34 /*12*/].f_3 = 0;
	Global_36763[34 /*12*/].f_10 = 0;
	Global_36763[34 /*12*/].f_11 = 0;
	Global_36763[34 /*12*/].f_4 = 0;
	Global_36763[35 /*12*/] = 94;
	Global_36763[35 /*12*/].f_1 = 96;
	Global_36763[35 /*12*/].f_2 = 13;
	Global_36763[35 /*12*/].f_3 = 1;
	Global_36763[35 /*12*/].f_10 = 0;
	Global_36763[35 /*12*/].f_11 = 0;
	Global_36763[35 /*12*/].f_4 = 0;
	Global_36763[36 /*12*/] = 94;
	Global_36763[36 /*12*/].f_1 = 97;
	Global_36763[36 /*12*/].f_2 = 13;
	Global_36763[36 /*12*/].f_3 = 2;
	Global_36763[36 /*12*/].f_10 = 0;
	Global_36763[36 /*12*/].f_11 = 0;
	Global_36763[36 /*12*/].f_4 = 0;
	Global_36763[37 /*12*/] = 94;
	Global_36763[37 /*12*/].f_1 = 98;
	Global_36763[37 /*12*/].f_2 = 14;
	Global_36763[37 /*12*/].f_3 = 0;
	Global_36763[37 /*12*/].f_10 = 0;
	Global_36763[37 /*12*/].f_11 = 0;
	Global_36763[37 /*12*/].f_4 = 0;
	Global_36763[38 /*12*/] = 94;
	Global_36763[38 /*12*/].f_1 = 99;
	Global_36763[38 /*12*/].f_2 = 14;
	Global_36763[38 /*12*/].f_3 = 1;
	Global_36763[38 /*12*/].f_10 = 0;
	Global_36763[38 /*12*/].f_11 = 0;
	Global_36763[38 /*12*/].f_4 = 0;
	Global_36763[39 /*12*/] = 94;
	Global_36763[39 /*12*/].f_1 = 100;
	Global_36763[39 /*12*/].f_2 = 14;
	Global_36763[39 /*12*/].f_3 = 2;
	Global_36763[39 /*12*/].f_10 = 0;
	Global_36763[39 /*12*/].f_11 = 0;
	Global_36763[39 /*12*/].f_4 = 0;
	Global_36763[40 /*12*/] = 94;
	Global_36763[40 /*12*/].f_1 = 101;
	Global_36763[40 /*12*/].f_2 = 12;
	Global_36763[40 /*12*/].f_3 = 0;
	Global_36763[40 /*12*/].f_10 = 0;
	Global_36763[40 /*12*/].f_11 = 0;
	Global_36763[40 /*12*/].f_4 = 0;
	Global_36763[41 /*12*/] = 94;
	Global_36763[41 /*12*/].f_1 = 102;
	Global_36763[41 /*12*/].f_2 = 12;
	Global_36763[41 /*12*/].f_3 = 1;
	Global_36763[41 /*12*/].f_10 = 0;
	Global_36763[41 /*12*/].f_11 = 0;
	Global_36763[41 /*12*/].f_4 = 0;
	Global_36763[42 /*12*/] = 94;
	Global_36763[42 /*12*/].f_1 = 103;
	Global_36763[42 /*12*/].f_2 = 12;
	Global_36763[42 /*12*/].f_3 = 2;
	Global_36763[42 /*12*/].f_10 = 0;
	Global_36763[42 /*12*/].f_11 = 0;
	Global_36763[42 /*12*/].f_4 = 0;
	Global_36763[43 /*12*/] = 104;
	Global_36763[43 /*12*/].f_1 = 105;
	Global_36763[43 /*12*/].f_2 = 7;
	Global_36763[43 /*12*/].f_3 = 0;
	Global_36763[43 /*12*/].f_10 = 1;
	Global_36763[43 /*12*/].f_11 = 0;
	Global_36763[43 /*12*/].f_4 = 0;
	Global_36763[44 /*12*/] = 108;
	Global_36763[44 /*12*/].f_1 = 109;
	Global_36763[44 /*12*/].f_2 = 15;
	Global_36763[44 /*12*/].f_3 = 0;
	Global_36763[44 /*12*/].f_10 = 1;
	Global_36763[44 /*12*/].f_11 = 0;
	Global_36763[44 /*12*/].f_4 = 0;
	Global_36763[45 /*12*/] = 110;
	Global_36763[45 /*12*/].f_1 = 111;
	Global_36763[45 /*12*/].f_2 = 15;
	Global_36763[45 /*12*/].f_3 = 0;
	Global_36763[45 /*12*/].f_10 = 1;
	Global_36763[45 /*12*/].f_11 = 0;
	Global_36763[45 /*12*/].f_4 = 0;
	Global_36763[46 /*12*/] = 112;
	Global_36763[46 /*12*/].f_1 = 113;
	Global_36763[46 /*12*/].f_2 = 15;
	Global_36763[46 /*12*/].f_3 = 0;
	Global_36763[46 /*12*/].f_10 = 1;
	Global_36763[46 /*12*/].f_11 = 0;
	Global_36763[46 /*12*/].f_4 = 0;
	Global_36763[47 /*12*/] = 117;
	Global_36763[47 /*12*/].f_1 = 118;
	Global_36763[47 /*12*/].f_2 = 16;
	Global_36763[47 /*12*/].f_3 = 0;
	Global_36763[47 /*12*/].f_10 = 1;
	Global_36763[47 /*12*/].f_11 = 0;
	Global_36763[47 /*12*/].f_4 = 0;
	Global_36763[48 /*12*/] = 119;
	Global_36763[48 /*12*/].f_1 = 120;
	Global_36763[48 /*12*/].f_2 = 16;
	Global_36763[48 /*12*/].f_3 = 0;
	Global_36763[48 /*12*/].f_10 = 1;
	Global_36763[48 /*12*/].f_11 = 0;
	Global_36763[48 /*12*/].f_4 = 0;
	Global_36763[49 /*12*/] = 131;
	Global_36763[49 /*12*/].f_1 = 132;
	Global_36763[49 /*12*/].f_2 = 16;
	Global_36763[49 /*12*/].f_3 = 0;
	Global_36763[49 /*12*/].f_10 = 1;
	Global_36763[49 /*12*/].f_11 = 0;
	Global_36763[49 /*12*/].f_4 = 0;
	Global_36763[50 /*12*/] = 129;
	Global_36763[50 /*12*/].f_1 = 130;
	Global_36763[50 /*12*/].f_2 = 16;
	Global_36763[50 /*12*/].f_3 = 0;
	Global_36763[50 /*12*/].f_10 = 0;
	Global_36763[50 /*12*/].f_11 = 0;
	Global_36763[50 /*12*/].f_4 = 0;
	Global_36763[51 /*12*/] = 127;
	Global_36763[51 /*12*/].f_1 = 128;
	Global_36763[51 /*12*/].f_2 = 16;
	Global_36763[51 /*12*/].f_3 = 0;
	Global_36763[51 /*12*/].f_10 = 1;
	Global_36763[51 /*12*/].f_11 = 0;
	Global_36763[51 /*12*/].f_4 = 0;
	Global_36763[52 /*12*/] = 125;
	Global_36763[52 /*12*/].f_1 = 126;
	Global_36763[52 /*12*/].f_2 = 16;
	Global_36763[52 /*12*/].f_3 = 0;
	Global_36763[52 /*12*/].f_10 = 1;
	Global_36763[52 /*12*/].f_11 = 0;
	Global_36763[52 /*12*/].f_4 = 0;
	Global_36763[53 /*12*/] = 123;
	Global_36763[53 /*12*/].f_1 = 124;
	Global_36763[53 /*12*/].f_2 = 16;
	Global_36763[53 /*12*/].f_3 = 0;
	Global_36763[53 /*12*/].f_10 = 1;
	Global_36763[53 /*12*/].f_11 = 0;
	Global_36763[53 /*12*/].f_4 = 0;
	Global_36763[54 /*12*/] = 121;
	Global_36763[54 /*12*/].f_1 = 122;
	Global_36763[54 /*12*/].f_2 = 16;
	Global_36763[54 /*12*/].f_3 = 0;
	Global_36763[54 /*12*/].f_10 = 1;
	Global_36763[54 /*12*/].f_11 = 0;
	Global_36763[54 /*12*/].f_4 = 0;
	Global_36763[55 /*12*/] = 133;
	Global_36763[55 /*12*/].f_1 = 134;
	Global_36763[55 /*12*/].f_2 = 12;
	Global_36763[55 /*12*/].f_3 = 0;
	Global_36763[55 /*12*/].f_10 = 0;
	Global_36763[55 /*12*/].f_11 = 0;
	Global_36763[55 /*12*/].f_4 = 0;
	Global_36763[56 /*12*/] = 135;
	Global_36763[56 /*12*/].f_1 = 136;
	Global_36763[56 /*12*/].f_2 = 14;
	Global_36763[56 /*12*/].f_3 = 0;
	Global_36763[56 /*12*/].f_10 = 0;
	Global_36763[56 /*12*/].f_11 = 0;
	Global_36763[56 /*12*/].f_4 = 0;
	Global_36763[57 /*12*/] = 137;
	Global_36763[57 /*12*/].f_1 = 138;
	Global_36763[57 /*12*/].f_2 = 12;
	Global_36763[57 /*12*/].f_3 = 0;
	Global_36763[57 /*12*/].f_10 = 0;
	Global_36763[57 /*12*/].f_11 = 0;
	Global_36763[57 /*12*/].f_4 = 0;
	Global_36763[58 /*12*/] = 133;
	Global_36763[58 /*12*/].f_1 = 139;
	Global_36763[58 /*12*/].f_2 = 12;
	Global_36763[58 /*12*/].f_3 = 1;
	Global_36763[58 /*12*/].f_10 = 0;
	Global_36763[58 /*12*/].f_11 = 0;
	Global_36763[58 /*12*/].f_4 = 0;
	Global_36763[59 /*12*/] = 133;
	Global_36763[59 /*12*/].f_1 = 140;
	Global_36763[59 /*12*/].f_2 = 12;
	Global_36763[59 /*12*/].f_3 = 2;
	Global_36763[59 /*12*/].f_10 = 0;
	Global_36763[59 /*12*/].f_11 = 0;
	Global_36763[59 /*12*/].f_4 = 0;
	Global_36763[60 /*12*/] = 135;
	Global_36763[60 /*12*/].f_1 = 136;
	Global_36763[60 /*12*/].f_2 = 14;
	Global_36763[60 /*12*/].f_3 = 1;
	Global_36763[60 /*12*/].f_10 = 0;
	Global_36763[60 /*12*/].f_11 = 0;
	Global_36763[60 /*12*/].f_4 = 0;
	Global_36763[61 /*12*/] = 135;
	Global_36763[61 /*12*/].f_1 = 136;
	Global_36763[61 /*12*/].f_2 = 14;
	Global_36763[61 /*12*/].f_3 = 2;
	Global_36763[61 /*12*/].f_10 = 0;
	Global_36763[61 /*12*/].f_11 = 0;
	Global_36763[61 /*12*/].f_4 = 0;
	Global_36763[62 /*12*/] = 137;
	Global_36763[62 /*12*/].f_1 = 141;
	Global_36763[62 /*12*/].f_2 = 12;
	Global_36763[62 /*12*/].f_3 = 1;
	Global_36763[62 /*12*/].f_10 = 0;
	Global_36763[62 /*12*/].f_11 = 0;
	Global_36763[62 /*12*/].f_4 = 0;
	Global_36763[63 /*12*/] = 137;
	Global_36763[63 /*12*/].f_1 = 138;
	Global_36763[63 /*12*/].f_2 = 12;
	Global_36763[63 /*12*/].f_3 = 2;
	Global_36763[63 /*12*/].f_10 = 0;
	Global_36763[63 /*12*/].f_11 = 0;
	Global_36763[63 /*12*/].f_4 = 0;
	Global_36763[64 /*12*/] = 148;
	Global_36763[64 /*12*/].f_1 = 149;
	Global_36763[64 /*12*/].f_2 = 7;
	Global_36763[64 /*12*/].f_3 = 0;
	Global_36763[64 /*12*/].f_10 = 0;
	Global_36763[64 /*12*/].f_11 = 0;
	Global_36763[64 /*12*/].f_4 = 0;
	Global_36763[65 /*12*/] = 148;
	Global_36763[65 /*12*/].f_1 = 151;
	Global_36763[65 /*12*/].f_2 = 7;
	Global_36763[65 /*12*/].f_3 = 0;
	Global_36763[65 /*12*/].f_10 = 0;
	Global_36763[65 /*12*/].f_11 = 0;
	Global_36763[65 /*12*/].f_4 = 0;
	Global_36763[66 /*12*/] = 148;
	Global_36763[66 /*12*/].f_1 = 150;
	Global_36763[66 /*12*/].f_2 = 7;
	Global_36763[66 /*12*/].f_3 = 0;
	Global_36763[66 /*12*/].f_10 = 0;
	Global_36763[66 /*12*/].f_11 = 0;
	Global_36763[66 /*12*/].f_4 = 0;
	Global_36763[67 /*12*/] = 155;
	Global_36763[67 /*12*/].f_1 = 156;
	Global_36763[67 /*12*/].f_2 = 63;
	Global_36763[67 /*12*/].f_3 = 2;
	Global_36763[67 /*12*/].f_10 = 0;
	Global_36763[67 /*12*/].f_11 = 0;
	Global_36763[67 /*12*/].f_4 = 0;
	Global_36763[68 /*12*/] = 125;
	Global_36763[68 /*12*/].f_1 = 160;
	Global_36763[68 /*12*/].f_2 = 16;
	Global_36763[68 /*12*/].f_3 = 0;
	Global_36763[68 /*12*/].f_10 = 1;
	Global_36763[68 /*12*/].f_11 = 0;
	Global_36763[68 /*12*/].f_4 = 0;
	Global_36763[69 /*12*/] = 161;
	Global_36763[69 /*12*/].f_1 = 162;
	Global_36763[69 /*12*/].f_2 = 64;
	Global_36763[69 /*12*/].f_3 = 2;
	Global_36763[69 /*12*/].f_10 = 0;
	Global_36763[69 /*12*/].f_11 = 0;
	Global_36763[69 /*12*/].f_4 = 0;
	Global_36763[70 /*12*/] = 161;
	Global_36763[70 /*12*/].f_1 = 162;
	Global_36763[70 /*12*/].f_2 = 64;
	Global_36763[70 /*12*/].f_3 = 1;
	Global_36763[70 /*12*/].f_10 = 0;
	Global_36763[70 /*12*/].f_11 = 0;
	Global_36763[70 /*12*/].f_4 = 0;
	Global_36763[71 /*12*/] = 161;
	Global_36763[71 /*12*/].f_1 = 162;
	Global_36763[71 /*12*/].f_2 = 64;
	Global_36763[71 /*12*/].f_3 = 2;
	Global_36763[71 /*12*/].f_10 = 0;
	Global_36763[71 /*12*/].f_11 = 0;
	Global_36763[71 /*12*/].f_4 = 0;
	Global_36763[72 /*12*/] = 166;
	Global_36763[72 /*12*/].f_1 = 16;
	Global_36763[72 /*12*/].f_2 = 21;
	Global_36763[72 /*12*/].f_3 = 0;
	Global_36763[72 /*12*/].f_10 = 0;
	Global_36763[72 /*12*/].f_11 = 0;
	Global_36763[72 /*12*/].f_4 = 0;
	Global_36763[73 /*12*/] = 166;
	Global_36763[73 /*12*/].f_1 = 16;
	Global_36763[73 /*12*/].f_2 = 21;
	Global_36763[73 /*12*/].f_3 = 1;
	Global_36763[73 /*12*/].f_10 = 0;
	Global_36763[73 /*12*/].f_11 = 0;
	Global_36763[73 /*12*/].f_4 = 0;
	Global_36763[74 /*12*/] = 166;
	Global_36763[74 /*12*/].f_1 = 16;
	Global_36763[74 /*12*/].f_2 = 21;
	Global_36763[74 /*12*/].f_3 = 2;
	Global_36763[74 /*12*/].f_10 = 0;
	Global_36763[74 /*12*/].f_11 = 0;
	Global_36763[74 /*12*/].f_4 = 0;
	Global_36763[75 /*12*/] = 167;
	Global_36763[75 /*12*/].f_1 = 16;
	Global_36763[75 /*12*/].f_2 = 6;
	Global_36763[75 /*12*/].f_3 = 2;
	Global_36763[75 /*12*/].f_10 = 0;
	Global_36763[75 /*12*/].f_11 = 0;
	Global_36763[75 /*12*/].f_4 = 0;
	Global_36763[76 /*12*/] = 168;
	Global_36763[76 /*12*/].f_1 = 16;
	Global_36763[76 /*12*/].f_2 = 6;
	Global_36763[76 /*12*/].f_3 = 2;
	Global_36763[76 /*12*/].f_10 = 0;
	Global_36763[76 /*12*/].f_11 = 0;
	Global_36763[76 /*12*/].f_4 = 0;
	Global_36763[77 /*12*/] = 169;
	Global_36763[77 /*12*/].f_1 = 16;
	Global_36763[77 /*12*/].f_2 = 6;
	Global_36763[77 /*12*/].f_3 = 2;
	Global_36763[77 /*12*/].f_10 = 0;
	Global_36763[77 /*12*/].f_11 = 0;
	Global_36763[77 /*12*/].f_4 = 0;
	Global_36763[78 /*12*/] = 170;
	Global_36763[78 /*12*/].f_1 = 16;
	Global_36763[78 /*12*/].f_2 = 6;
	Global_36763[78 /*12*/].f_3 = 2;
	Global_36763[78 /*12*/].f_10 = 0;
	Global_36763[78 /*12*/].f_11 = 0;
	Global_36763[78 /*12*/].f_4 = 0;
	Global_36763[79 /*12*/] = 171;
	Global_36763[79 /*12*/].f_1 = 16;
	Global_36763[79 /*12*/].f_2 = 6;
	Global_36763[79 /*12*/].f_3 = 2;
	Global_36763[79 /*12*/].f_10 = 0;
	Global_36763[79 /*12*/].f_11 = 0;
	Global_36763[79 /*12*/].f_4 = 0;
	Global_36763[80 /*12*/] = 172;
	Global_36763[80 /*12*/].f_1 = 173;
	Global_36763[80 /*12*/].f_2 = 6;
	Global_36763[80 /*12*/].f_3 = 2;
	Global_36763[80 /*12*/].f_10 = 0;
	Global_36763[80 /*12*/].f_11 = 0;
	Global_36763[80 /*12*/].f_4 = 0;
	Global_36763[81 /*12*/] = 174;
	Global_36763[81 /*12*/].f_1 = 175;
	Global_36763[81 /*12*/].f_2 = 6;
	Global_36763[81 /*12*/].f_3 = 2;
	Global_36763[81 /*12*/].f_10 = 0;
	Global_36763[81 /*12*/].f_11 = 0;
	Global_36763[81 /*12*/].f_4 = 0;
	Global_36763[82 /*12*/] = 176;
	Global_36763[82 /*12*/].f_1 = 177;
	Global_36763[82 /*12*/].f_2 = 6;
	Global_36763[82 /*12*/].f_3 = 2;
	Global_36763[82 /*12*/].f_10 = 0;
	Global_36763[82 /*12*/].f_11 = 0;
	Global_36763[82 /*12*/].f_4 = 0;
	Global_36763[83 /*12*/] = 178;
	Global_36763[83 /*12*/].f_1 = 179;
	Global_36763[83 /*12*/].f_2 = 6;
	Global_36763[83 /*12*/].f_3 = 2;
	Global_36763[83 /*12*/].f_10 = 0;
	Global_36763[83 /*12*/].f_11 = 0;
	Global_36763[83 /*12*/].f_4 = 0;
	Global_36763[84 /*12*/] = 180;
	Global_36763[84 /*12*/].f_1 = 181;
	Global_36763[84 /*12*/].f_2 = 4;
	Global_36763[84 /*12*/].f_3 = 0;
	Global_36763[84 /*12*/].f_10 = 0;
	Global_36763[84 /*12*/].f_11 = 3000;
	Global_36763[84 /*12*/].f_4 = 0;
	Global_36763[85 /*12*/] = 185;
	Global_36763[85 /*12*/].f_1 = 186;
	Global_36763[85 /*12*/].f_2 = 22;
	Global_36763[85 /*12*/].f_3 = 0;
	Global_36763[85 /*12*/].f_10 = 0;
	Global_36763[85 /*12*/].f_11 = 0;
	Global_36763[85 /*12*/].f_4 = 0;
	Global_36763[86 /*12*/] = 193;
	Global_36763[86 /*12*/].f_1 = 194;
	Global_36763[86 /*12*/].f_2 = 24;
	Global_36763[86 /*12*/].f_3 = 0;
	Global_36763[86 /*12*/].f_10 = 1;
	Global_36763[86 /*12*/].f_11 = 0;
	Global_36763[86 /*12*/].f_4 = 1;
	Global_36763[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_36763[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[87 /*12*/] = 195;
	Global_36763[87 /*12*/].f_1 = 196;
	Global_36763[87 /*12*/].f_2 = 0;
	Global_36763[87 /*12*/].f_3 = 24;
	Global_36763[87 /*12*/].f_10 = 0;
	Global_36763[87 /*12*/].f_11 = 0;
	Global_36763[87 /*12*/].f_4 = 1;
	Global_36763[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_36763[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[88 /*12*/] = 197;
	Global_36763[88 /*12*/].f_1 = 198;
	Global_36763[88 /*12*/].f_2 = 24;
	Global_36763[88 /*12*/].f_3 = 0;
	Global_36763[88 /*12*/].f_10 = 0;
	Global_36763[88 /*12*/].f_11 = 120000;
	Global_36763[88 /*12*/].f_4 = 0;
	Global_36763[89 /*12*/] = 200;
	Global_36763[89 /*12*/].f_1 = 201;
	Global_36763[89 /*12*/].f_2 = 24;
	Global_36763[89 /*12*/].f_3 = 0;
	Global_36763[89 /*12*/].f_10 = 1;
	Global_36763[89 /*12*/].f_11 = 0;
	Global_36763[89 /*12*/].f_4 = 1;
	Global_36763[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_36763[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[90 /*12*/] = 202;
	Global_36763[90 /*12*/].f_1 = 203;
	Global_36763[90 /*12*/].f_2 = 0;
	Global_36763[90 /*12*/].f_3 = 24;
	Global_36763[90 /*12*/].f_10 = 0;
	Global_36763[90 /*12*/].f_11 = 0;
	Global_36763[90 /*12*/].f_4 = 1;
	Global_36763[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_36763[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[91 /*12*/] = 204;
	Global_36763[91 /*12*/].f_1 = 205;
	Global_36763[91 /*12*/].f_2 = 24;
	Global_36763[91 /*12*/].f_3 = 0;
	Global_36763[91 /*12*/].f_10 = 0;
	Global_36763[91 /*12*/].f_11 = 120000;
	Global_36763[91 /*12*/].f_4 = 0;
	Global_36763[92 /*12*/] = 209;
	Global_36763[92 /*12*/].f_1 = 210;
	Global_36763[92 /*12*/].f_2 = 25;
	Global_36763[92 /*12*/].f_3 = 0;
	Global_36763[92 /*12*/].f_10 = 1;
	Global_36763[92 /*12*/].f_11 = 0;
	Global_36763[92 /*12*/].f_4 = 1;
	Global_36763[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_36763[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[93 /*12*/] = 211;
	Global_36763[93 /*12*/].f_1 = 212;
	Global_36763[93 /*12*/].f_2 = 0;
	Global_36763[93 /*12*/].f_3 = 25;
	Global_36763[93 /*12*/].f_10 = 0;
	Global_36763[93 /*12*/].f_11 = 0;
	Global_36763[93 /*12*/].f_4 = 1;
	Global_36763[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_36763[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[94 /*12*/] = 213;
	Global_36763[94 /*12*/].f_1 = 214;
	Global_36763[94 /*12*/].f_2 = 25;
	Global_36763[94 /*12*/].f_3 = 0;
	Global_36763[94 /*12*/].f_10 = 1;
	Global_36763[94 /*12*/].f_11 = 60000;
	Global_36763[94 /*12*/].f_4 = 1;
	Global_36763[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_36763[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[95 /*12*/] = 215;
	Global_36763[95 /*12*/].f_1 = 216;
	Global_36763[95 /*12*/].f_2 = 0;
	Global_36763[95 /*12*/].f_3 = 25;
	Global_36763[95 /*12*/].f_10 = 0;
	Global_36763[95 /*12*/].f_11 = 0;
	Global_36763[95 /*12*/].f_4 = 1;
	Global_36763[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_36763[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[96 /*12*/] = 217;
	Global_36763[96 /*12*/].f_1 = 218;
	Global_36763[96 /*12*/].f_2 = 25;
	Global_36763[96 /*12*/].f_3 = 0;
	Global_36763[96 /*12*/].f_10 = 0;
	Global_36763[96 /*12*/].f_11 = 60000;
	Global_36763[96 /*12*/].f_4 = 0;
	Global_36763[97 /*12*/] = 222;
	Global_36763[97 /*12*/].f_1 = 223;
	Global_36763[97 /*12*/].f_2 = 26;
	Global_36763[97 /*12*/].f_3 = 0;
	Global_36763[97 /*12*/].f_10 = 1;
	Global_36763[97 /*12*/].f_11 = 0;
	Global_36763[97 /*12*/].f_4 = 1;
	Global_36763[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_36763[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[98 /*12*/] = 224;
	Global_36763[98 /*12*/].f_1 = 225;
	Global_36763[98 /*12*/].f_2 = 0;
	Global_36763[98 /*12*/].f_3 = 26;
	Global_36763[98 /*12*/].f_10 = 0;
	Global_36763[98 /*12*/].f_11 = 0;
	Global_36763[98 /*12*/].f_4 = 0;
	Global_36763[99 /*12*/] = 229;
	Global_36763[99 /*12*/].f_1 = 230;
	Global_36763[99 /*12*/].f_2 = 27;
	Global_36763[99 /*12*/].f_3 = 0;
	Global_36763[99 /*12*/].f_10 = 1;
	Global_36763[99 /*12*/].f_11 = 0;
	Global_36763[99 /*12*/].f_4 = 1;
	Global_36763[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_36763[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[100 /*12*/] = 231;
	Global_36763[100 /*12*/].f_1 = 232;
	Global_36763[100 /*12*/].f_2 = 0;
	Global_36763[100 /*12*/].f_3 = 27;
	Global_36763[100 /*12*/].f_10 = 0;
	Global_36763[100 /*12*/].f_11 = 0;
	Global_36763[100 /*12*/].f_4 = 0;
	Global_36763[101 /*12*/] = 236;
	Global_36763[101 /*12*/].f_1 = 237;
	Global_36763[101 /*12*/].f_2 = 28;
	Global_36763[101 /*12*/].f_3 = 0;
	Global_36763[101 /*12*/].f_10 = 0;
	Global_36763[101 /*12*/].f_11 = 0;
	Global_36763[101 /*12*/].f_4 = 0;
	Global_36763[102 /*12*/] = 238;
	Global_36763[102 /*12*/].f_1 = 239;
	Global_36763[102 /*12*/].f_2 = 26;
	Global_36763[102 /*12*/].f_3 = 0;
	Global_36763[102 /*12*/].f_10 = 1;
	Global_36763[102 /*12*/].f_11 = 0;
	Global_36763[102 /*12*/].f_4 = 1;
	Global_36763[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_36763[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[103 /*12*/] = 240;
	Global_36763[103 /*12*/].f_1 = 241;
	Global_36763[103 /*12*/].f_2 = 0;
	Global_36763[103 /*12*/].f_3 = 26;
	Global_36763[103 /*12*/].f_10 = 0;
	Global_36763[103 /*12*/].f_11 = 0;
	Global_36763[103 /*12*/].f_4 = 0;
	Global_36763[104 /*12*/] = 245;
	Global_36763[104 /*12*/].f_1 = 246;
	Global_36763[104 /*12*/].f_2 = 29;
	Global_36763[104 /*12*/].f_3 = 0;
	Global_36763[104 /*12*/].f_10 = 1;
	Global_36763[104 /*12*/].f_11 = 0;
	Global_36763[104 /*12*/].f_4 = 1;
	Global_36763[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_36763[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[105 /*12*/] = 247;
	Global_36763[105 /*12*/].f_1 = 248;
	Global_36763[105 /*12*/].f_2 = 0;
	Global_36763[105 /*12*/].f_3 = 29;
	Global_36763[105 /*12*/].f_10 = 0;
	Global_36763[105 /*12*/].f_11 = 0;
	Global_36763[105 /*12*/].f_4 = 0;
	Global_36763[106 /*12*/] = 252;
	Global_36763[106 /*12*/].f_1 = 253;
	Global_36763[106 /*12*/].f_2 = 30;
	Global_36763[106 /*12*/].f_3 = 1;
	Global_36763[106 /*12*/].f_10 = 1;
	Global_36763[106 /*12*/].f_11 = 120000;
	Global_36763[106 /*12*/].f_4 = 1;
	Global_36763[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_36763[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[107 /*12*/] = 254;
	Global_36763[107 /*12*/].f_1 = 255;
	Global_36763[107 /*12*/].f_2 = 1;
	Global_36763[107 /*12*/].f_3 = 30;
	Global_36763[107 /*12*/].f_10 = 0;
	Global_36763[107 /*12*/].f_11 = 0;
	Global_36763[107 /*12*/].f_4 = 1;
	Global_36763[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_36763[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[108 /*12*/] = 256;
	Global_36763[108 /*12*/].f_1 = 257;
	Global_36763[108 /*12*/].f_2 = 30;
	Global_36763[108 /*12*/].f_3 = 1;
	Global_36763[108 /*12*/].f_10 = 1;
	Global_36763[108 /*12*/].f_11 = 120000;
	Global_36763[108 /*12*/].f_4 = 1;
	Global_36763[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_36763[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[109 /*12*/] = 258;
	Global_36763[109 /*12*/].f_1 = 259;
	Global_36763[109 /*12*/].f_2 = 1;
	Global_36763[109 /*12*/].f_3 = 30;
	Global_36763[109 /*12*/].f_10 = 0;
	Global_36763[109 /*12*/].f_11 = 0;
	Global_36763[109 /*12*/].f_4 = 1;
	Global_36763[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_36763[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[110 /*12*/] = 260;
	Global_36763[110 /*12*/].f_1 = 261;
	Global_36763[110 /*12*/].f_2 = 30;
	Global_36763[110 /*12*/].f_3 = 1;
	Global_36763[110 /*12*/].f_10 = 0;
	Global_36763[110 /*12*/].f_11 = 60000;
	Global_36763[110 /*12*/].f_4 = 0;
	Global_36763[111 /*12*/] = 265;
	Global_36763[111 /*12*/].f_1 = 266;
	Global_36763[111 /*12*/].f_2 = 31;
	Global_36763[111 /*12*/].f_3 = 1;
	Global_36763[111 /*12*/].f_10 = 1;
	Global_36763[111 /*12*/].f_11 = 0;
	Global_36763[111 /*12*/].f_4 = 1;
	Global_36763[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_36763[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[112 /*12*/] = 267;
	Global_36763[112 /*12*/].f_1 = 268;
	Global_36763[112 /*12*/].f_2 = 1;
	Global_36763[112 /*12*/].f_3 = 31;
	Global_36763[112 /*12*/].f_10 = 0;
	Global_36763[112 /*12*/].f_11 = 0;
	Global_36763[112 /*12*/].f_4 = 0;
	Global_36763[113 /*12*/] = 272;
	Global_36763[113 /*12*/].f_1 = 273;
	Global_36763[113 /*12*/].f_2 = 32;
	Global_36763[113 /*12*/].f_3 = 1;
	Global_36763[113 /*12*/].f_10 = 1;
	Global_36763[113 /*12*/].f_11 = 0;
	Global_36763[113 /*12*/].f_4 = 1;
	Global_36763[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_36763[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[114 /*12*/] = 274;
	Global_36763[114 /*12*/].f_1 = 275;
	Global_36763[114 /*12*/].f_2 = 1;
	Global_36763[114 /*12*/].f_3 = 32;
	Global_36763[114 /*12*/].f_10 = 0;
	Global_36763[114 /*12*/].f_11 = 0;
	Global_36763[114 /*12*/].f_4 = 1;
	Global_36763[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_36763[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[115 /*12*/] = 276;
	Global_36763[115 /*12*/].f_1 = 277;
	Global_36763[115 /*12*/].f_2 = 32;
	Global_36763[115 /*12*/].f_3 = 1;
	Global_36763[115 /*12*/].f_10 = 0;
	Global_36763[115 /*12*/].f_11 = 30000;
	Global_36763[115 /*12*/].f_4 = 0;
	Global_36763[116 /*12*/] = 278;
	Global_36763[116 /*12*/].f_1 = 279;
	Global_36763[116 /*12*/].f_2 = 32;
	Global_36763[116 /*12*/].f_3 = 1;
	Global_36763[116 /*12*/].f_10 = 1;
	Global_36763[116 /*12*/].f_11 = 0;
	Global_36763[116 /*12*/].f_4 = 1;
	Global_36763[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_36763[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_36763[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[117 /*12*/] = 280;
	Global_36763[117 /*12*/].f_1 = 281;
	Global_36763[117 /*12*/].f_2 = 1;
	Global_36763[117 /*12*/].f_3 = 32;
	Global_36763[117 /*12*/].f_10 = 0;
	Global_36763[117 /*12*/].f_11 = 0;
	Global_36763[117 /*12*/].f_4 = 0;
	Global_36763[118 /*12*/] = 283;
	Global_36763[118 /*12*/].f_1 = 284;
	Global_36763[118 /*12*/].f_2 = 32;
	Global_36763[118 /*12*/].f_3 = 1;
	Global_36763[118 /*12*/].f_10 = 1;
	Global_36763[118 /*12*/].f_11 = 0;
	Global_36763[118 /*12*/].f_4 = 1;
	Global_36763[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_36763[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[119 /*12*/] = 285;
	Global_36763[119 /*12*/].f_1 = 286;
	Global_36763[119 /*12*/].f_2 = 1;
	Global_36763[119 /*12*/].f_3 = 32;
	Global_36763[119 /*12*/].f_10 = 0;
	Global_36763[119 /*12*/].f_11 = 0;
	Global_36763[119 /*12*/].f_4 = 0;
	Global_36763[120 /*12*/] = 287;
	Global_36763[120 /*12*/].f_1 = 288;
	Global_36763[120 /*12*/].f_2 = 32;
	Global_36763[120 /*12*/].f_3 = 1;
	Global_36763[120 /*12*/].f_10 = 1;
	Global_36763[120 /*12*/].f_11 = 0;
	Global_36763[120 /*12*/].f_4 = 1;
	Global_36763[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_36763[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[121 /*12*/] = 289;
	Global_36763[121 /*12*/].f_1 = 290;
	Global_36763[121 /*12*/].f_2 = 1;
	Global_36763[121 /*12*/].f_3 = 32;
	Global_36763[121 /*12*/].f_10 = 0;
	Global_36763[121 /*12*/].f_11 = 0;
	Global_36763[121 /*12*/].f_4 = 1;
	Global_36763[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_36763[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[122 /*12*/] = 291;
	Global_36763[122 /*12*/].f_1 = 292;
	Global_36763[122 /*12*/].f_2 = 32;
	Global_36763[122 /*12*/].f_3 = 1;
	Global_36763[122 /*12*/].f_10 = 1;
	Global_36763[122 /*12*/].f_11 = 30000;
	Global_36763[122 /*12*/].f_4 = 1;
	Global_36763[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_36763[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[123 /*12*/] = 293;
	Global_36763[123 /*12*/].f_1 = 294;
	Global_36763[123 /*12*/].f_2 = 1;
	Global_36763[123 /*12*/].f_3 = 32;
	Global_36763[123 /*12*/].f_10 = 0;
	Global_36763[123 /*12*/].f_11 = 0;
	Global_36763[123 /*12*/].f_4 = 0;
	Global_36763[124 /*12*/] = 295;
	Global_36763[124 /*12*/].f_1 = 296;
	Global_36763[124 /*12*/].f_2 = 27;
	Global_36763[124 /*12*/].f_3 = 1;
	Global_36763[124 /*12*/].f_10 = 1;
	Global_36763[124 /*12*/].f_11 = 0;
	Global_36763[124 /*12*/].f_4 = 1;
	Global_36763[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_36763[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[125 /*12*/] = 297;
	Global_36763[125 /*12*/].f_1 = 298;
	Global_36763[125 /*12*/].f_2 = 1;
	Global_36763[125 /*12*/].f_3 = 27;
	Global_36763[125 /*12*/].f_10 = 0;
	Global_36763[125 /*12*/].f_11 = 0;
	Global_36763[125 /*12*/].f_4 = 0;
	Global_36763[126 /*12*/] = 299;
	Global_36763[126 /*12*/].f_1 = 300;
	Global_36763[126 /*12*/].f_2 = 2;
	Global_36763[126 /*12*/].f_3 = 1;
	Global_36763[126 /*12*/].f_10 = 1;
	Global_36763[126 /*12*/].f_11 = 0;
	Global_36763[126 /*12*/].f_4 = 1;
	Global_36763[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_36763[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[127 /*12*/] = 301;
	Global_36763[127 /*12*/].f_1 = 302;
	Global_36763[127 /*12*/].f_2 = 1;
	Global_36763[127 /*12*/].f_3 = 2;
	Global_36763[127 /*12*/].f_10 = 0;
	Global_36763[127 /*12*/].f_11 = 0;
	Global_36763[127 /*12*/].f_4 = 1;
	Global_36763[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_36763[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[128 /*12*/] = 303;
	Global_36763[128 /*12*/].f_1 = 304;
	Global_36763[128 /*12*/].f_2 = 2;
	Global_36763[128 /*12*/].f_3 = 1;
	Global_36763[128 /*12*/].f_10 = 1;
	Global_36763[128 /*12*/].f_11 = 60000;
	Global_36763[128 /*12*/].f_4 = 1;
	Global_36763[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_36763[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[129 /*12*/] = 305;
	Global_36763[129 /*12*/].f_1 = 306;
	Global_36763[129 /*12*/].f_2 = 1;
	Global_36763[129 /*12*/].f_3 = 2;
	Global_36763[129 /*12*/].f_10 = 0;
	Global_36763[129 /*12*/].f_11 = 0;
	Global_36763[129 /*12*/].f_4 = 1;
	Global_36763[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_36763[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[130 /*12*/] = 307;
	Global_36763[130 /*12*/].f_1 = 308;
	Global_36763[130 /*12*/].f_2 = 2;
	Global_36763[130 /*12*/].f_3 = 1;
	Global_36763[130 /*12*/].f_10 = 0;
	Global_36763[130 /*12*/].f_11 = 30000;
	Global_36763[130 /*12*/].f_4 = 0;
	Global_36763[131 /*12*/] = 309;
	Global_36763[131 /*12*/].f_1 = 310;
	Global_36763[131 /*12*/].f_2 = 0;
	Global_36763[131 /*12*/].f_3 = 1;
	Global_36763[131 /*12*/].f_10 = 1;
	Global_36763[131 /*12*/].f_11 = 0;
	Global_36763[131 /*12*/].f_4 = 1;
	Global_36763[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_36763[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[132 /*12*/] = 311;
	Global_36763[132 /*12*/].f_1 = 312;
	Global_36763[132 /*12*/].f_2 = 1;
	Global_36763[132 /*12*/].f_3 = 0;
	Global_36763[132 /*12*/].f_10 = 0;
	Global_36763[132 /*12*/].f_11 = 0;
	Global_36763[132 /*12*/].f_4 = 1;
	Global_36763[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_36763[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[133 /*12*/] = 313;
	Global_36763[133 /*12*/].f_1 = 314;
	Global_36763[133 /*12*/].f_2 = 0;
	Global_36763[133 /*12*/].f_3 = 1;
	Global_36763[133 /*12*/].f_10 = 0;
	Global_36763[133 /*12*/].f_11 = 25000;
	Global_36763[133 /*12*/].f_4 = 0;
	Global_36763[134 /*12*/] = 315;
	Global_36763[134 /*12*/].f_1 = 316;
	Global_36763[134 /*12*/].f_2 = 0;
	Global_36763[134 /*12*/].f_3 = 1;
	Global_36763[134 /*12*/].f_10 = 1;
	Global_36763[134 /*12*/].f_11 = 0;
	Global_36763[134 /*12*/].f_4 = 1;
	Global_36763[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_36763[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[135 /*12*/] = 317;
	Global_36763[135 /*12*/].f_1 = 318;
	Global_36763[135 /*12*/].f_2 = 1;
	Global_36763[135 /*12*/].f_3 = 0;
	Global_36763[135 /*12*/].f_10 = 0;
	Global_36763[135 /*12*/].f_11 = 0;
	Global_36763[135 /*12*/].f_4 = 0;
	Global_36763[136 /*12*/] = 322;
	Global_36763[136 /*12*/].f_1 = 323;
	Global_36763[136 /*12*/].f_2 = 33;
	Global_36763[136 /*12*/].f_3 = 2;
	Global_36763[136 /*12*/].f_10 = 1;
	Global_36763[136 /*12*/].f_11 = 0;
	Global_36763[136 /*12*/].f_4 = 1;
	Global_36763[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_36763[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[137 /*12*/] = 324;
	Global_36763[137 /*12*/].f_1 = 325;
	Global_36763[137 /*12*/].f_2 = 2;
	Global_36763[137 /*12*/].f_3 = 33;
	Global_36763[137 /*12*/].f_10 = 0;
	Global_36763[137 /*12*/].f_11 = 0;
	Global_36763[137 /*12*/].f_4 = 0;
	Global_36763[138 /*12*/] = 326;
	Global_36763[138 /*12*/].f_1 = 327;
	Global_36763[138 /*12*/].f_2 = 33;
	Global_36763[138 /*12*/].f_3 = 2;
	Global_36763[138 /*12*/].f_10 = 1;
	Global_36763[138 /*12*/].f_11 = 0;
	Global_36763[138 /*12*/].f_4 = 1;
	Global_36763[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_36763[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[139 /*12*/] = 328;
	Global_36763[139 /*12*/].f_1 = 329;
	Global_36763[139 /*12*/].f_2 = 2;
	Global_36763[139 /*12*/].f_3 = 33;
	Global_36763[139 /*12*/].f_10 = 0;
	Global_36763[139 /*12*/].f_11 = 0;
	Global_36763[139 /*12*/].f_4 = 1;
	Global_36763[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_36763[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[140 /*12*/] = 330;
	Global_36763[140 /*12*/].f_1 = 331;
	Global_36763[140 /*12*/].f_2 = 2;
	Global_36763[140 /*12*/].f_3 = 33;
	Global_36763[140 /*12*/].f_10 = 0;
	Global_36763[140 /*12*/].f_11 = 0;
	Global_36763[140 /*12*/].f_4 = 0;
	Global_36763[141 /*12*/] = 332;
	Global_36763[141 /*12*/].f_1 = 333;
	Global_36763[141 /*12*/].f_2 = 29;
	Global_36763[141 /*12*/].f_3 = 2;
	Global_36763[141 /*12*/].f_10 = 0;
	Global_36763[141 /*12*/].f_11 = 0;
	Global_36763[141 /*12*/].f_4 = 1;
	Global_36763[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_36763[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[142 /*12*/] = 334;
	Global_36763[142 /*12*/].f_1 = 335;
	Global_36763[142 /*12*/].f_2 = 2;
	Global_36763[142 /*12*/].f_3 = 29;
	Global_36763[142 /*12*/].f_10 = 0;
	Global_36763[142 /*12*/].f_11 = 0;
	Global_36763[142 /*12*/].f_4 = 0;
	Global_36763[143 /*12*/] = 336;
	Global_36763[143 /*12*/].f_1 = 337;
	Global_36763[143 /*12*/].f_2 = 3;
	Global_36763[143 /*12*/].f_3 = 2;
	Global_36763[143 /*12*/].f_10 = 0;
	Global_36763[143 /*12*/].f_11 = 0;
	Global_36763[143 /*12*/].f_4 = 1;
	Global_36763[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_36763[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[144 /*12*/] = 338;
	Global_36763[144 /*12*/].f_1 = 339;
	Global_36763[144 /*12*/].f_2 = 2;
	Global_36763[144 /*12*/].f_3 = 3;
	Global_36763[144 /*12*/].f_10 = 0;
	Global_36763[144 /*12*/].f_11 = 0;
	Global_36763[144 /*12*/].f_4 = 0;
	Global_36763[145 /*12*/] = 343;
	Global_36763[145 /*12*/].f_1 = 344;
	Global_36763[145 /*12*/].f_2 = 34;
	Global_36763[145 /*12*/].f_3 = 2;
	Global_36763[145 /*12*/].f_10 = 0;
	Global_36763[145 /*12*/].f_11 = 0;
	Global_36763[145 /*12*/].f_4 = 1;
	Global_36763[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_36763[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_36763[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[146 /*12*/] = 345;
	Global_36763[146 /*12*/].f_1 = 346;
	Global_36763[146 /*12*/].f_2 = 2;
	Global_36763[146 /*12*/].f_3 = 34;
	Global_36763[146 /*12*/].f_10 = 0;
	Global_36763[146 /*12*/].f_11 = 0;
	Global_36763[146 /*12*/].f_4 = 0;
	Global_36763[147 /*12*/] = 319;
	Global_36763[147 /*12*/].f_1 = 347;
	Global_36763[147 /*12*/].f_2 = 26;
	Global_36763[147 /*12*/].f_3 = 2;
	Global_36763[147 /*12*/].f_10 = 0;
	Global_36763[147 /*12*/].f_11 = 0;
	Global_36763[147 /*12*/].f_4 = 0;
	Global_36763[148 /*12*/] = 351;
	Global_36763[148 /*12*/].f_1 = 352;
	Global_36763[148 /*12*/].f_2 = 35;
	Global_36763[148 /*12*/].f_3 = 2;
	Global_36763[148 /*12*/].f_10 = 0;
	Global_36763[148 /*12*/].f_11 = 0;
	Global_36763[148 /*12*/].f_4 = 0;
	Global_36763[149 /*12*/] = 351;
	Global_36763[149 /*12*/].f_1 = 352;
	Global_36763[149 /*12*/].f_2 = 35;
	Global_36763[149 /*12*/].f_3 = 0;
	Global_36763[149 /*12*/].f_10 = 0;
	Global_36763[149 /*12*/].f_11 = 0;
	Global_36763[149 /*12*/].f_4 = 0;
	Global_36763[150 /*12*/] = 351;
	Global_36763[150 /*12*/].f_1 = 352;
	Global_36763[150 /*12*/].f_2 = 35;
	Global_36763[150 /*12*/].f_3 = 1;
	Global_36763[150 /*12*/].f_10 = 0;
	Global_36763[150 /*12*/].f_11 = 0;
	Global_36763[150 /*12*/].f_4 = 0;
	Global_36763[151 /*12*/] = 355;
	Global_36763[151 /*12*/].f_1 = 356;
	Global_36763[151 /*12*/].f_2 = 36;
	Global_36763[151 /*12*/].f_3 = 2;
	Global_36763[151 /*12*/].f_10 = 0;
	Global_36763[151 /*12*/].f_11 = 0;
	Global_36763[151 /*12*/].f_4 = 0;
	Global_36763[152 /*12*/] = 355;
	Global_36763[152 /*12*/].f_1 = 356;
	Global_36763[152 /*12*/].f_2 = 36;
	Global_36763[152 /*12*/].f_3 = 0;
	Global_36763[152 /*12*/].f_10 = 0;
	Global_36763[152 /*12*/].f_11 = 0;
	Global_36763[152 /*12*/].f_4 = 0;
	Global_36763[153 /*12*/] = 355;
	Global_36763[153 /*12*/].f_1 = 356;
	Global_36763[153 /*12*/].f_2 = 36;
	Global_36763[153 /*12*/].f_3 = 1;
	Global_36763[153 /*12*/].f_10 = 0;
	Global_36763[153 /*12*/].f_11 = 0;
	Global_36763[153 /*12*/].f_4 = 0;
	Global_36763[154 /*12*/] = 363;
	Global_36763[154 /*12*/].f_1 = 364;
	Global_36763[154 /*12*/].f_2 = 38;
	Global_36763[154 /*12*/].f_3 = 2;
	Global_36763[154 /*12*/].f_10 = 0;
	Global_36763[154 /*12*/].f_11 = 0;
	Global_36763[154 /*12*/].f_4 = 0;
	Global_36763[155 /*12*/] = 365;
	Global_36763[155 /*12*/].f_1 = 366;
	Global_36763[155 /*12*/].f_2 = 11;
	Global_36763[155 /*12*/].f_3 = 0;
	Global_36763[155 /*12*/].f_10 = 0;
	Global_36763[155 /*12*/].f_11 = 0;
	Global_36763[155 /*12*/].f_4 = 0;
	Global_36763[156 /*12*/] = 365;
	Global_36763[156 /*12*/].f_1 = 366;
	Global_36763[156 /*12*/].f_2 = 11;
	Global_36763[156 /*12*/].f_3 = 1;
	Global_36763[156 /*12*/].f_10 = 0;
	Global_36763[156 /*12*/].f_11 = 0;
	Global_36763[156 /*12*/].f_4 = 0;
	Global_36763[157 /*12*/] = 365;
	Global_36763[157 /*12*/].f_1 = 366;
	Global_36763[157 /*12*/].f_2 = 11;
	Global_36763[157 /*12*/].f_3 = 2;
	Global_36763[157 /*12*/].f_10 = 0;
	Global_36763[157 /*12*/].f_11 = 0;
	Global_36763[157 /*12*/].f_4 = 0;
	Global_36763[158 /*12*/] = 367;
	Global_36763[158 /*12*/].f_1 = 368;
	Global_36763[158 /*12*/].f_2 = 29;
	Global_36763[158 /*12*/].f_3 = 2;
	Global_36763[158 /*12*/].f_10 = 0;
	Global_36763[158 /*12*/].f_11 = 0;
	Global_36763[158 /*12*/].f_4 = 0;
	Global_36763[159 /*12*/] = 372;
	Global_36763[159 /*12*/].f_1 = 373;
	Global_36763[159 /*12*/].f_2 = 39;
	Global_36763[159 /*12*/].f_3 = 0;
	Global_36763[159 /*12*/].f_10 = 0;
	Global_36763[159 /*12*/].f_11 = 0;
	Global_36763[159 /*12*/].f_4 = 0;
	Global_36763[160 /*12*/] = 374;
	Global_36763[160 /*12*/].f_1 = 375;
	Global_36763[160 /*12*/].f_2 = 39;
	Global_36763[160 /*12*/].f_3 = 1;
	Global_36763[160 /*12*/].f_10 = 0;
	Global_36763[160 /*12*/].f_11 = 0;
	Global_36763[160 /*12*/].f_4 = 0;
	Global_36763[161 /*12*/] = 417;
	Global_36763[161 /*12*/].f_1 = 418;
	Global_36763[161 /*12*/].f_2 = 40;
	Global_36763[161 /*12*/].f_3 = 1;
	Global_36763[161 /*12*/].f_10 = 0;
	Global_36763[161 /*12*/].f_11 = 0;
	Global_36763[161 /*12*/].f_4 = 0;
	Global_36763[162 /*12*/] = 419;
	Global_36763[162 /*12*/].f_1 = 420;
	Global_36763[162 /*12*/].f_2 = 43;
	Global_36763[162 /*12*/].f_3 = 0;
	Global_36763[162 /*12*/].f_10 = 0;
	Global_36763[162 /*12*/].f_11 = 0;
	Global_36763[162 /*12*/].f_4 = 0;
	Global_36763[163 /*12*/] = 421;
	Global_36763[163 /*12*/].f_1 = 422;
	Global_36763[163 /*12*/].f_2 = 43;
	Global_36763[163 /*12*/].f_3 = 2;
	Global_36763[163 /*12*/].f_10 = 0;
	Global_36763[163 /*12*/].f_11 = 0;
	Global_36763[163 /*12*/].f_4 = 0;
	Global_36763[164 /*12*/] = 423;
	Global_36763[164 /*12*/].f_1 = 424;
	Global_36763[164 /*12*/].f_2 = 43;
	Global_36763[164 /*12*/].f_3 = 1;
	Global_36763[164 /*12*/].f_10 = 0;
	Global_36763[164 /*12*/].f_11 = 0;
	Global_36763[164 /*12*/].f_4 = 0;
	Global_36763[165 /*12*/] = 425;
	Global_36763[165 /*12*/].f_1 = 426;
	Global_36763[165 /*12*/].f_2 = 44;
	Global_36763[165 /*12*/].f_3 = 1;
	Global_36763[165 /*12*/].f_10 = 0;
	Global_36763[165 /*12*/].f_11 = 0;
	Global_36763[165 /*12*/].f_4 = 0;
	Global_36763[166 /*12*/] = 427;
	Global_36763[166 /*12*/].f_1 = 428;
	Global_36763[166 /*12*/].f_2 = 45;
	Global_36763[166 /*12*/].f_3 = 0;
	Global_36763[166 /*12*/].f_10 = 0;
	Global_36763[166 /*12*/].f_11 = 0;
	Global_36763[166 /*12*/].f_4 = 0;
	Global_36763[167 /*12*/] = 429;
	Global_36763[167 /*12*/].f_1 = 430;
	Global_36763[167 /*12*/].f_2 = 46;
	Global_36763[167 /*12*/].f_3 = 0;
	Global_36763[167 /*12*/].f_10 = 0;
	Global_36763[167 /*12*/].f_11 = 0;
	Global_36763[167 /*12*/].f_4 = 0;
	Global_36763[168 /*12*/] = 431;
	Global_36763[168 /*12*/].f_1 = 432;
	Global_36763[168 /*12*/].f_2 = 49;
	Global_36763[168 /*12*/].f_3 = 0;
	Global_36763[168 /*12*/].f_10 = 0;
	Global_36763[168 /*12*/].f_11 = 0;
	Global_36763[168 /*12*/].f_4 = 0;
	Global_36763[169 /*12*/] = 433;
	Global_36763[169 /*12*/].f_1 = 434;
	Global_36763[169 /*12*/].f_2 = 49;
	Global_36763[169 /*12*/].f_3 = 2;
	Global_36763[169 /*12*/].f_10 = 0;
	Global_36763[169 /*12*/].f_11 = 0;
	Global_36763[169 /*12*/].f_4 = 0;
	Global_36763[170 /*12*/] = 435;
	Global_36763[170 /*12*/].f_1 = 436;
	Global_36763[170 /*12*/].f_2 = 49;
	Global_36763[170 /*12*/].f_3 = 1;
	Global_36763[170 /*12*/].f_10 = 0;
	Global_36763[170 /*12*/].f_11 = 0;
	Global_36763[170 /*12*/].f_4 = 0;
	Global_36763[171 /*12*/] = 437;
	Global_36763[171 /*12*/].f_1 = 438;
	Global_36763[171 /*12*/].f_2 = 50;
	Global_36763[171 /*12*/].f_3 = 1;
	Global_36763[171 /*12*/].f_10 = 0;
	Global_36763[171 /*12*/].f_11 = 0;
	Global_36763[171 /*12*/].f_4 = 0;
	Global_36763[172 /*12*/] = 439;
	Global_36763[172 /*12*/].f_1 = 440;
	Global_36763[172 /*12*/].f_2 = 51;
	Global_36763[172 /*12*/].f_3 = 0;
	Global_36763[172 /*12*/].f_10 = 0;
	Global_36763[172 /*12*/].f_11 = 0;
	Global_36763[172 /*12*/].f_4 = 0;
	Global_36763[173 /*12*/] = 441;
	Global_36763[173 /*12*/].f_1 = 442;
	Global_36763[173 /*12*/].f_2 = 51;
	Global_36763[173 /*12*/].f_3 = 2;
	Global_36763[173 /*12*/].f_10 = 0;
	Global_36763[173 /*12*/].f_11 = 0;
	Global_36763[173 /*12*/].f_4 = 0;
	Global_36763[174 /*12*/] = 443;
	Global_36763[174 /*12*/].f_1 = 444;
	Global_36763[174 /*12*/].f_2 = 51;
	Global_36763[174 /*12*/].f_3 = 1;
	Global_36763[174 /*12*/].f_10 = 0;
	Global_36763[174 /*12*/].f_11 = 0;
	Global_36763[174 /*12*/].f_4 = 0;
	Global_36763[175 /*12*/] = 445;
	Global_36763[175 /*12*/].f_1 = 446;
	Global_36763[175 /*12*/].f_2 = 52;
	Global_36763[175 /*12*/].f_3 = 0;
	Global_36763[175 /*12*/].f_10 = 0;
	Global_36763[175 /*12*/].f_11 = 0;
	Global_36763[175 /*12*/].f_4 = 0;
	Global_36763[176 /*12*/] = 447;
	Global_36763[176 /*12*/].f_1 = 448;
	Global_36763[176 /*12*/].f_2 = 52;
	Global_36763[176 /*12*/].f_3 = 2;
	Global_36763[176 /*12*/].f_10 = 0;
	Global_36763[176 /*12*/].f_11 = 0;
	Global_36763[176 /*12*/].f_4 = 0;
	Global_36763[177 /*12*/] = 449;
	Global_36763[177 /*12*/].f_1 = 450;
	Global_36763[177 /*12*/].f_2 = 52;
	Global_36763[177 /*12*/].f_3 = 1;
	Global_36763[177 /*12*/].f_10 = 0;
	Global_36763[177 /*12*/].f_11 = 0;
	Global_36763[177 /*12*/].f_4 = 0;
	Global_36763[178 /*12*/] = 451;
	Global_36763[178 /*12*/].f_1 = 452;
	Global_36763[178 /*12*/].f_2 = 53;
	Global_36763[178 /*12*/].f_3 = 2;
	Global_36763[178 /*12*/].f_10 = 0;
	Global_36763[178 /*12*/].f_11 = 0;
	Global_36763[178 /*12*/].f_4 = 0;
	Global_36763[179 /*12*/] = 453;
	Global_36763[179 /*12*/].f_1 = 454;
	Global_36763[179 /*12*/].f_2 = 53;
	Global_36763[179 /*12*/].f_3 = 0;
	Global_36763[179 /*12*/].f_10 = 0;
	Global_36763[179 /*12*/].f_11 = 0;
	Global_36763[179 /*12*/].f_4 = 0;
	Global_36763[180 /*12*/] = 455;
	Global_36763[180 /*12*/].f_1 = 456;
	Global_36763[180 /*12*/].f_2 = 53;
	Global_36763[180 /*12*/].f_3 = 1;
	Global_36763[180 /*12*/].f_10 = 0;
	Global_36763[180 /*12*/].f_11 = 0;
	Global_36763[180 /*12*/].f_4 = 0;
	Global_36763[181 /*12*/] = 457;
	Global_36763[181 /*12*/].f_1 = 458;
	Global_36763[181 /*12*/].f_2 = 4;
	Global_36763[181 /*12*/].f_3 = 0;
	Global_36763[181 /*12*/].f_10 = 0;
	Global_36763[181 /*12*/].f_11 = 0;
	Global_36763[181 /*12*/].f_4 = 0;
	Global_36763[182 /*12*/] = 459;
	Global_36763[182 /*12*/].f_1 = 460;
	Global_36763[182 /*12*/].f_2 = 37;
	Global_36763[182 /*12*/].f_3 = 0;
	Global_36763[182 /*12*/].f_10 = 0;
	Global_36763[182 /*12*/].f_11 = 0;
	Global_36763[182 /*12*/].f_4 = 0;
	Global_36763[183 /*12*/] = 461;
	Global_36763[183 /*12*/].f_1 = 462;
	Global_36763[183 /*12*/].f_2 = 37;
	Global_36763[183 /*12*/].f_3 = 2;
	Global_36763[183 /*12*/].f_10 = 0;
	Global_36763[183 /*12*/].f_11 = 0;
	Global_36763[183 /*12*/].f_4 = 0;
	Global_36763[184 /*12*/] = 463;
	Global_36763[184 /*12*/].f_1 = 464;
	Global_36763[184 /*12*/].f_2 = 37;
	Global_36763[184 /*12*/].f_3 = 1;
	Global_36763[184 /*12*/].f_10 = 0;
	Global_36763[184 /*12*/].f_11 = 0;
	Global_36763[184 /*12*/].f_4 = 0;
	Global_36763[185 /*12*/] = 471;
	Global_36763[185 /*12*/].f_1 = 472;
	Global_36763[185 /*12*/].f_2 = 54;
	Global_36763[185 /*12*/].f_3 = 1;
	Global_36763[185 /*12*/].f_10 = 0;
	Global_36763[185 /*12*/].f_11 = 0;
	Global_36763[185 /*12*/].f_4 = 0;
	Global_36763[186 /*12*/] = 473;
	Global_36763[186 /*12*/].f_1 = 474;
	Global_36763[186 /*12*/].f_2 = 54;
	Global_36763[186 /*12*/].f_3 = 0;
	Global_36763[186 /*12*/].f_10 = 0;
	Global_36763[186 /*12*/].f_11 = 0;
	Global_36763[186 /*12*/].f_4 = 0;
	Global_36763[187 /*12*/] = 475;
	Global_36763[187 /*12*/].f_1 = 476;
	Global_36763[187 /*12*/].f_2 = 55;
	Global_36763[187 /*12*/].f_3 = 1;
	Global_36763[187 /*12*/].f_10 = 0;
	Global_36763[187 /*12*/].f_11 = 0;
	Global_36763[187 /*12*/].f_4 = 0;
	Global_36763[188 /*12*/] = 477;
	Global_36763[188 /*12*/].f_1 = 478;
	Global_36763[188 /*12*/].f_2 = 54;
	Global_36763[188 /*12*/].f_3 = 2;
	Global_36763[188 /*12*/].f_10 = 0;
	Global_36763[188 /*12*/].f_11 = 0;
	Global_36763[188 /*12*/].f_4 = 0;
	Global_36763[189 /*12*/] = 479;
	Global_36763[189 /*12*/].f_1 = 480;
	Global_36763[189 /*12*/].f_2 = 55;
	Global_36763[189 /*12*/].f_3 = 0;
	Global_36763[189 /*12*/].f_10 = 0;
	Global_36763[189 /*12*/].f_11 = 0;
	Global_36763[189 /*12*/].f_4 = 0;
	Global_36763[190 /*12*/] = 481;
	Global_36763[190 /*12*/].f_1 = 482;
	Global_36763[190 /*12*/].f_2 = 55;
	Global_36763[190 /*12*/].f_3 = 2;
	Global_36763[190 /*12*/].f_10 = 0;
	Global_36763[190 /*12*/].f_11 = 0;
	Global_36763[190 /*12*/].f_4 = 0;
	Global_36763[191 /*12*/] = 483;
	Global_36763[191 /*12*/].f_1 = 484;
	Global_36763[191 /*12*/].f_2 = 12;
	Global_36763[191 /*12*/].f_3 = 0;
	Global_36763[191 /*12*/].f_10 = 0;
	Global_36763[191 /*12*/].f_11 = 0;
	Global_36763[191 /*12*/].f_4 = 0;
	Global_36763[192 /*12*/] = 485;
	Global_36763[192 /*12*/].f_1 = 486;
	Global_36763[192 /*12*/].f_2 = 12;
	Global_36763[192 /*12*/].f_3 = 1;
	Global_36763[192 /*12*/].f_10 = 0;
	Global_36763[192 /*12*/].f_11 = 0;
	Global_36763[192 /*12*/].f_4 = 0;
	Global_36763[193 /*12*/] = 487;
	Global_36763[193 /*12*/].f_1 = 488;
	Global_36763[193 /*12*/].f_2 = 12;
	Global_36763[193 /*12*/].f_3 = 2;
	Global_36763[193 /*12*/].f_10 = 0;
	Global_36763[193 /*12*/].f_11 = 0;
	Global_36763[193 /*12*/].f_4 = 0;
	Global_36763[194 /*12*/] = 510;
	Global_36763[194 /*12*/].f_1 = 511;
	Global_36763[194 /*12*/].f_2 = 56;
	Global_36763[194 /*12*/].f_3 = 0;
	Global_36763[194 /*12*/].f_10 = 0;
	Global_36763[194 /*12*/].f_11 = 0;
	Global_36763[194 /*12*/].f_4 = 0;
	Global_36763[195 /*12*/] = 512;
	Global_36763[195 /*12*/].f_1 = 513;
	Global_36763[195 /*12*/].f_2 = 56;
	Global_36763[195 /*12*/].f_3 = 0;
	Global_36763[195 /*12*/].f_10 = 0;
	Global_36763[195 /*12*/].f_11 = 0;
	Global_36763[195 /*12*/].f_4 = 0;
	Global_36763[196 /*12*/] = 514;
	Global_36763[196 /*12*/].f_1 = 515;
	Global_36763[196 /*12*/].f_2 = 56;
	Global_36763[196 /*12*/].f_3 = 0;
	Global_36763[196 /*12*/].f_10 = 0;
	Global_36763[196 /*12*/].f_11 = 0;
	Global_36763[196 /*12*/].f_4 = 0;
	Global_36763[197 /*12*/] = 516;
	Global_36763[197 /*12*/].f_1 = 517;
	Global_36763[197 /*12*/].f_2 = 56;
	Global_36763[197 /*12*/].f_3 = 0;
	Global_36763[197 /*12*/].f_10 = 0;
	Global_36763[197 /*12*/].f_11 = 0;
	Global_36763[197 /*12*/].f_4 = 0;
	Global_36763[198 /*12*/] = 518;
	Global_36763[198 /*12*/].f_1 = 519;
	Global_36763[198 /*12*/].f_2 = 56;
	Global_36763[198 /*12*/].f_3 = 0;
	Global_36763[198 /*12*/].f_10 = 0;
	Global_36763[198 /*12*/].f_11 = 0;
	Global_36763[198 /*12*/].f_4 = 0;
	Global_36763[199 /*12*/] = 520;
	Global_36763[199 /*12*/].f_1 = 521;
	Global_36763[199 /*12*/].f_2 = 57;
	Global_36763[199 /*12*/].f_3 = 0;
	Global_36763[199 /*12*/].f_10 = 1;
	Global_36763[199 /*12*/].f_11 = 60000;
	Global_36763[199 /*12*/].f_4 = 1;
	Global_36763[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_36763[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_36763[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[200 /*12*/] = 522;
	Global_36763[200 /*12*/].f_1 = 523;
	Global_36763[200 /*12*/].f_2 = 0;
	Global_36763[200 /*12*/].f_3 = 57;
	Global_36763[200 /*12*/].f_10 = 0;
	Global_36763[200 /*12*/].f_11 = 0;
	Global_36763[200 /*12*/].f_4 = 1;
	Global_36763[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_36763[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_36763[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[201 /*12*/] = 524;
	Global_36763[201 /*12*/].f_1 = 525;
	Global_36763[201 /*12*/].f_2 = 57;
	Global_36763[201 /*12*/].f_3 = 0;
	Global_36763[201 /*12*/].f_10 = 1;
	Global_36763[201 /*12*/].f_11 = 60000;
	Global_36763[201 /*12*/].f_4 = 1;
	Global_36763[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_36763[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_36763[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[202 /*12*/] = 526;
	Global_36763[202 /*12*/].f_1 = 527;
	Global_36763[202 /*12*/].f_2 = 0;
	Global_36763[202 /*12*/].f_3 = 57;
	Global_36763[202 /*12*/].f_10 = 0;
	Global_36763[202 /*12*/].f_11 = 0;
	Global_36763[202 /*12*/].f_4 = 1;
	Global_36763[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_36763[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_36763[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[203 /*12*/] = 528;
	Global_36763[203 /*12*/].f_1 = 529;
	Global_36763[203 /*12*/].f_2 = 57;
	Global_36763[203 /*12*/].f_3 = 0;
	Global_36763[203 /*12*/].f_10 = 1;
	Global_36763[203 /*12*/].f_11 = 60000;
	Global_36763[203 /*12*/].f_4 = 1;
	Global_36763[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_36763[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_36763[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[204 /*12*/] = 530;
	Global_36763[204 /*12*/].f_1 = 531;
	Global_36763[204 /*12*/].f_2 = 0;
	Global_36763[204 /*12*/].f_3 = 57;
	Global_36763[204 /*12*/].f_10 = 0;
	Global_36763[204 /*12*/].f_11 = 0;
	Global_36763[204 /*12*/].f_4 = 1;
	Global_36763[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_36763[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_36763[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[205 /*12*/] = 532;
	Global_36763[205 /*12*/].f_1 = 533;
	Global_36763[205 /*12*/].f_2 = 57;
	Global_36763[205 /*12*/].f_3 = 0;
	Global_36763[205 /*12*/].f_10 = 1;
	Global_36763[205 /*12*/].f_11 = 60000;
	Global_36763[205 /*12*/].f_4 = 1;
	Global_36763[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_36763[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_36763[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[206 /*12*/] = 534;
	Global_36763[206 /*12*/].f_1 = 535;
	Global_36763[206 /*12*/].f_2 = 0;
	Global_36763[206 /*12*/].f_3 = 57;
	Global_36763[206 /*12*/].f_10 = 0;
	Global_36763[206 /*12*/].f_11 = 0;
	Global_36763[206 /*12*/].f_4 = 0;
	Global_36763[207 /*12*/] = 543;
	Global_36763[207 /*12*/].f_1 = 544;
	Global_36763[207 /*12*/].f_2 = 58;
	Global_36763[207 /*12*/].f_3 = 0;
	Global_36763[207 /*12*/].f_10 = 1;
	Global_36763[207 /*12*/].f_11 = 60000;
	Global_36763[207 /*12*/].f_4 = 1;
	Global_36763[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_36763[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_36763[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[208 /*12*/] = 545;
	Global_36763[208 /*12*/].f_1 = 546;
	Global_36763[208 /*12*/].f_2 = 0;
	Global_36763[208 /*12*/].f_3 = 58;
	Global_36763[208 /*12*/].f_10 = 0;
	Global_36763[208 /*12*/].f_11 = 0;
	Global_36763[208 /*12*/].f_4 = 1;
	Global_36763[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_36763[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_36763[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[209 /*12*/] = 547;
	Global_36763[209 /*12*/].f_1 = 548;
	Global_36763[209 /*12*/].f_2 = 58;
	Global_36763[209 /*12*/].f_3 = 0;
	Global_36763[209 /*12*/].f_10 = 1;
	Global_36763[209 /*12*/].f_11 = 60000;
	Global_36763[209 /*12*/].f_4 = 1;
	Global_36763[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_36763[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_36763[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[210 /*12*/] = 549;
	Global_36763[210 /*12*/].f_1 = 550;
	Global_36763[210 /*12*/].f_2 = 0;
	Global_36763[210 /*12*/].f_3 = 58;
	Global_36763[210 /*12*/].f_10 = 0;
	Global_36763[210 /*12*/].f_11 = 0;
	Global_36763[210 /*12*/].f_4 = 1;
	Global_36763[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_36763[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_36763[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[211 /*12*/] = 551;
	Global_36763[211 /*12*/].f_1 = 552;
	Global_36763[211 /*12*/].f_2 = 58;
	Global_36763[211 /*12*/].f_3 = 0;
	Global_36763[211 /*12*/].f_10 = 1;
	Global_36763[211 /*12*/].f_11 = 60000;
	Global_36763[211 /*12*/].f_4 = 1;
	Global_36763[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_36763[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_36763[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[212 /*12*/] = 553;
	Global_36763[212 /*12*/].f_1 = 554;
	Global_36763[212 /*12*/].f_2 = 0;
	Global_36763[212 /*12*/].f_3 = 58;
	Global_36763[212 /*12*/].f_10 = 0;
	Global_36763[212 /*12*/].f_11 = 0;
	Global_36763[212 /*12*/].f_4 = 1;
	Global_36763[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_36763[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_36763[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[213 /*12*/] = 555;
	Global_36763[213 /*12*/].f_1 = 556;
	Global_36763[213 /*12*/].f_2 = 58;
	Global_36763[213 /*12*/].f_3 = 0;
	Global_36763[213 /*12*/].f_10 = 1;
	Global_36763[213 /*12*/].f_11 = 60000;
	Global_36763[213 /*12*/].f_4 = 0;
	Global_36763[214 /*12*/] = 563;
	Global_36763[214 /*12*/].f_1 = 564;
	Global_36763[214 /*12*/].f_2 = 59;
	Global_36763[214 /*12*/].f_3 = 0;
	Global_36763[214 /*12*/].f_10 = 1;
	Global_36763[214 /*12*/].f_11 = 60000;
	Global_36763[214 /*12*/].f_4 = 1;
	Global_36763[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_36763[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_36763[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[215 /*12*/] = 565;
	Global_36763[215 /*12*/].f_1 = 566;
	Global_36763[215 /*12*/].f_2 = 0;
	Global_36763[215 /*12*/].f_3 = 59;
	Global_36763[215 /*12*/].f_10 = 0;
	Global_36763[215 /*12*/].f_11 = 0;
	Global_36763[215 /*12*/].f_4 = 1;
	Global_36763[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_36763[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_36763[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[216 /*12*/] = 567;
	Global_36763[216 /*12*/].f_1 = 568;
	Global_36763[216 /*12*/].f_2 = 59;
	Global_36763[216 /*12*/].f_3 = 0;
	Global_36763[216 /*12*/].f_10 = 1;
	Global_36763[216 /*12*/].f_11 = 60000;
	Global_36763[216 /*12*/].f_4 = 1;
	Global_36763[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_36763[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_36763[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[217 /*12*/] = 569;
	Global_36763[217 /*12*/].f_1 = 570;
	Global_36763[217 /*12*/].f_2 = 0;
	Global_36763[217 /*12*/].f_3 = 59;
	Global_36763[217 /*12*/].f_10 = 0;
	Global_36763[217 /*12*/].f_11 = 0;
	Global_36763[217 /*12*/].f_4 = 1;
	Global_36763[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_36763[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_36763[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[218 /*12*/] = 571;
	Global_36763[218 /*12*/].f_1 = 572;
	Global_36763[218 /*12*/].f_2 = 59;
	Global_36763[218 /*12*/].f_3 = 0;
	Global_36763[218 /*12*/].f_10 = 1;
	Global_36763[218 /*12*/].f_11 = 60000;
	Global_36763[218 /*12*/].f_4 = 1;
	Global_36763[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_36763[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_36763[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[219 /*12*/] = 573;
	Global_36763[219 /*12*/].f_1 = 574;
	Global_36763[219 /*12*/].f_2 = 0;
	Global_36763[219 /*12*/].f_3 = 59;
	Global_36763[219 /*12*/].f_10 = 0;
	Global_36763[219 /*12*/].f_11 = 0;
	Global_36763[219 /*12*/].f_4 = 1;
	Global_36763[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_36763[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_36763[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[220 /*12*/] = 575;
	Global_36763[220 /*12*/].f_1 = 576;
	Global_36763[220 /*12*/].f_2 = 59;
	Global_36763[220 /*12*/].f_3 = 0;
	Global_36763[220 /*12*/].f_10 = 1;
	Global_36763[220 /*12*/].f_11 = 60000;
	Global_36763[220 /*12*/].f_4 = 1;
	Global_36763[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_36763[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_36763[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[221 /*12*/] = 577;
	Global_36763[221 /*12*/].f_1 = 578;
	Global_36763[221 /*12*/].f_2 = 0;
	Global_36763[221 /*12*/].f_3 = 59;
	Global_36763[221 /*12*/].f_10 = 0;
	Global_36763[221 /*12*/].f_11 = 0;
	Global_36763[221 /*12*/].f_4 = 0;
	Global_36763[222 /*12*/] = 586;
	Global_36763[222 /*12*/].f_1 = 587;
	Global_36763[222 /*12*/].f_2 = 60;
	Global_36763[222 /*12*/].f_3 = 2;
	Global_36763[222 /*12*/].f_10 = 1;
	Global_36763[222 /*12*/].f_11 = 60000;
	Global_36763[222 /*12*/].f_4 = 1;
	Global_36763[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_36763[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_36763[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[223 /*12*/] = 588;
	Global_36763[223 /*12*/].f_1 = 589;
	Global_36763[223 /*12*/].f_2 = 2;
	Global_36763[223 /*12*/].f_3 = 60;
	Global_36763[223 /*12*/].f_10 = 0;
	Global_36763[223 /*12*/].f_11 = 0;
	Global_36763[223 /*12*/].f_4 = 1;
	Global_36763[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_36763[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_36763[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[224 /*12*/] = 590;
	Global_36763[224 /*12*/].f_1 = 591;
	Global_36763[224 /*12*/].f_2 = 60;
	Global_36763[224 /*12*/].f_3 = 2;
	Global_36763[224 /*12*/].f_10 = 1;
	Global_36763[224 /*12*/].f_11 = 60000;
	Global_36763[224 /*12*/].f_4 = 1;
	Global_36763[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_36763[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_36763[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[225 /*12*/] = 592;
	Global_36763[225 /*12*/].f_1 = 593;
	Global_36763[225 /*12*/].f_2 = 2;
	Global_36763[225 /*12*/].f_3 = 60;
	Global_36763[225 /*12*/].f_10 = 0;
	Global_36763[225 /*12*/].f_11 = 0;
	Global_36763[225 /*12*/].f_4 = 1;
	Global_36763[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_36763[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_36763[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[226 /*12*/] = 594;
	Global_36763[226 /*12*/].f_1 = 595;
	Global_36763[226 /*12*/].f_2 = 60;
	Global_36763[226 /*12*/].f_3 = 2;
	Global_36763[226 /*12*/].f_10 = 1;
	Global_36763[226 /*12*/].f_11 = 60000;
	Global_36763[226 /*12*/].f_4 = 1;
	Global_36763[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_36763[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_36763[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[227 /*12*/] = 596;
	Global_36763[227 /*12*/].f_1 = 597;
	Global_36763[227 /*12*/].f_2 = 2;
	Global_36763[227 /*12*/].f_3 = 60;
	Global_36763[227 /*12*/].f_10 = 1;
	Global_36763[227 /*12*/].f_11 = 60000;
	Global_36763[227 /*12*/].f_4 = 1;
	Global_36763[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_36763[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_36763[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[228 /*12*/] = 598;
	Global_36763[228 /*12*/].f_1 = 599;
	Global_36763[228 /*12*/].f_2 = 2;
	Global_36763[228 /*12*/].f_3 = 60;
	Global_36763[228 /*12*/].f_10 = 0;
	Global_36763[228 /*12*/].f_11 = 0;
	Global_36763[228 /*12*/].f_4 = 0;
	Global_36763[229 /*12*/] = 606;
	Global_36763[229 /*12*/].f_1 = 607;
	Global_36763[229 /*12*/].f_2 = 61;
	Global_36763[229 /*12*/].f_3 = 2;
	Global_36763[229 /*12*/].f_10 = 1;
	Global_36763[229 /*12*/].f_11 = 60000;
	Global_36763[229 /*12*/].f_4 = 1;
	Global_36763[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_36763[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_36763[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[230 /*12*/] = 608;
	Global_36763[230 /*12*/].f_1 = 609;
	Global_36763[230 /*12*/].f_2 = 2;
	Global_36763[230 /*12*/].f_3 = 61;
	Global_36763[230 /*12*/].f_10 = 0;
	Global_36763[230 /*12*/].f_11 = 0;
	Global_36763[230 /*12*/].f_4 = 1;
	Global_36763[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_36763[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_36763[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[231 /*12*/] = 611;
	Global_36763[231 /*12*/].f_1 = 612;
	Global_36763[231 /*12*/].f_2 = 61;
	Global_36763[231 /*12*/].f_3 = 2;
	Global_36763[231 /*12*/].f_10 = 1;
	Global_36763[231 /*12*/].f_11 = 60000;
	Global_36763[231 /*12*/].f_4 = 1;
	Global_36763[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_36763[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_36763[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[232 /*12*/] = 613;
	Global_36763[232 /*12*/].f_1 = 614;
	Global_36763[232 /*12*/].f_2 = 2;
	Global_36763[232 /*12*/].f_3 = 61;
	Global_36763[232 /*12*/].f_10 = 0;
	Global_36763[232 /*12*/].f_11 = 0;
	Global_36763[232 /*12*/].f_4 = 1;
	Global_36763[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_36763[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_36763[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[233 /*12*/] = 615;
	Global_36763[233 /*12*/].f_1 = 616;
	Global_36763[233 /*12*/].f_2 = 61;
	Global_36763[233 /*12*/].f_3 = 2;
	Global_36763[233 /*12*/].f_10 = 1;
	Global_36763[233 /*12*/].f_11 = 60000;
	Global_36763[233 /*12*/].f_4 = 1;
	Global_36763[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_36763[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_36763[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[234 /*12*/] = 620;
	Global_36763[234 /*12*/].f_1 = 621;
	Global_36763[234 /*12*/].f_2 = 2;
	Global_36763[234 /*12*/].f_3 = 61;
	Global_36763[234 /*12*/].f_10 = 0;
	Global_36763[234 /*12*/].f_11 = 0;
	Global_36763[234 /*12*/].f_4 = 0;
	Global_36763[235 /*12*/] = 623;
	Global_36763[235 /*12*/].f_1 = 624;
	Global_36763[235 /*12*/].f_2 = 62;
	Global_36763[235 /*12*/].f_3 = 2;
	Global_36763[235 /*12*/].f_10 = 1;
	Global_36763[235 /*12*/].f_11 = 60000;
	Global_36763[235 /*12*/].f_4 = 1;
	Global_36763[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_36763[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_36763[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[236 /*12*/] = 625;
	Global_36763[236 /*12*/].f_1 = 626;
	Global_36763[236 /*12*/].f_2 = 2;
	Global_36763[236 /*12*/].f_3 = 62;
	Global_36763[236 /*12*/].f_10 = 0;
	Global_36763[236 /*12*/].f_11 = 0;
	Global_36763[236 /*12*/].f_4 = 1;
	Global_36763[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_36763[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_36763[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[237 /*12*/] = 627;
	Global_36763[237 /*12*/].f_1 = 628;
	Global_36763[237 /*12*/].f_2 = 62;
	Global_36763[237 /*12*/].f_3 = 2;
	Global_36763[237 /*12*/].f_10 = 1;
	Global_36763[237 /*12*/].f_11 = 60000;
	Global_36763[237 /*12*/].f_4 = 1;
	Global_36763[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_36763[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_36763[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[238 /*12*/] = 629;
	Global_36763[238 /*12*/].f_1 = 630;
	Global_36763[238 /*12*/].f_2 = 2;
	Global_36763[238 /*12*/].f_3 = 62;
	Global_36763[238 /*12*/].f_10 = 0;
	Global_36763[238 /*12*/].f_11 = 0;
	Global_36763[238 /*12*/].f_4 = 1;
	Global_36763[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_36763[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_36763[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[239 /*12*/] = 631;
	Global_36763[239 /*12*/].f_1 = 632;
	Global_36763[239 /*12*/].f_2 = 62;
	Global_36763[239 /*12*/].f_3 = 2;
	Global_36763[239 /*12*/].f_10 = 1;
	Global_36763[239 /*12*/].f_11 = 60000;
	Global_36763[239 /*12*/].f_4 = 1;
	Global_36763[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_36763[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_36763[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36763[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36763[240 /*12*/] = 633;
	Global_36763[240 /*12*/].f_1 = 634;
	Global_36763[240 /*12*/].f_2 = 2;
	Global_36763[240 /*12*/].f_3 = 62;
	Global_36763[240 /*12*/].f_10 = 0;
	Global_36763[240 /*12*/].f_11 = 0;
	Global_36763[240 /*12*/].f_4 = 0;
	Global_36763[241 /*12*/] = 646;
	Global_36763[241 /*12*/].f_1 = 647;
	Global_36763[241 /*12*/].f_2 = 36;
	Global_36763[241 /*12*/].f_3 = 2;
	Global_36763[241 /*12*/].f_10 = 0;
	Global_36763[241 /*12*/].f_11 = 0;
	Global_36763[241 /*12*/].f_4 = 0;
	Global_36763[242 /*12*/] = 648;
	Global_36763[242 /*12*/].f_1 = 649;
	Global_36763[242 /*12*/].f_2 = 36;
	Global_36763[242 /*12*/].f_3 = 0;
	Global_36763[242 /*12*/].f_10 = 0;
	Global_36763[242 /*12*/].f_11 = 0;
	Global_36763[242 /*12*/].f_4 = 0;
	Global_36763[243 /*12*/] = 650;
	Global_36763[243 /*12*/].f_1 = 651;
	Global_36763[243 /*12*/].f_2 = 36;
	Global_36763[243 /*12*/].f_3 = 1;
	Global_36763[243 /*12*/].f_10 = 0;
	Global_36763[243 /*12*/].f_11 = 0;
	Global_36763[243 /*12*/].f_4 = 0;
	Global_36763[244 /*12*/] = 655;
	Global_36763[244 /*12*/].f_1 = 656;
	Global_36763[244 /*12*/].f_2 = 65;
	Global_36763[244 /*12*/].f_3 = 1;
	Global_36763[244 /*12*/].f_10 = 0;
	Global_36763[244 /*12*/].f_11 = 0;
	Global_36763[244 /*12*/].f_4 = 0;
	Global_36763[245 /*12*/] = 657;
	Global_36763[245 /*12*/].f_1 = 658;
	Global_36763[245 /*12*/].f_2 = 65;
	Global_36763[245 /*12*/].f_3 = 1;
	Global_36763[245 /*12*/].f_10 = 0;
	Global_36763[245 /*12*/].f_11 = 0;
	Global_36763[245 /*12*/].f_4 = 0;
	Global_36763[246 /*12*/] = 659;
	Global_36763[246 /*12*/].f_1 = 660;
	Global_36763[246 /*12*/].f_2 = 65;
	Global_36763[246 /*12*/].f_3 = 1;
	Global_36763[246 /*12*/].f_10 = 0;
	Global_36763[246 /*12*/].f_11 = 0;
	Global_36763[246 /*12*/].f_4 = 0;
	Global_36763[247 /*12*/] = 661;
	Global_36763[247 /*12*/].f_1 = 662;
	Global_36763[247 /*12*/].f_2 = 65;
	Global_36763[247 /*12*/].f_3 = 1;
	Global_36763[247 /*12*/].f_10 = 0;
	Global_36763[247 /*12*/].f_11 = 0;
	Global_36763[247 /*12*/].f_4 = 0;
	Global_36763[248 /*12*/] = 663;
	Global_36763[248 /*12*/].f_1 = 664;
	Global_36763[248 /*12*/].f_2 = 33;
	Global_36763[248 /*12*/].f_3 = 2;
	Global_36763[248 /*12*/].f_10 = 0;
	Global_36763[248 /*12*/].f_11 = 40000;
	Global_36763[248 /*12*/].f_4 = 0;
	Global_36763[249 /*12*/] = 665;
	Global_36763[249 /*12*/].f_1 = 666;
	Global_36763[249 /*12*/].f_2 = 19;
	Global_36763[249 /*12*/].f_3 = 1;
	Global_36763[249 /*12*/].f_10 = 1;
	Global_36763[249 /*12*/].f_11 = 0;
	Global_36763[249 /*12*/].f_4 = 0;
	Global_36763[250 /*12*/] = 667;
	Global_36763[250 /*12*/].f_1 = 668;
	Global_36763[250 /*12*/].f_2 = 19;
	Global_36763[250 /*12*/].f_3 = 1;
	Global_36763[250 /*12*/].f_10 = 1;
	Global_36763[250 /*12*/].f_11 = 0;
	Global_36763[250 /*12*/].f_4 = 0;
	Global_36763[251 /*12*/] = 669;
	Global_36763[251 /*12*/].f_1 = 670;
	Global_36763[251 /*12*/].f_2 = 19;
	Global_36763[251 /*12*/].f_3 = 1;
	Global_36763[251 /*12*/].f_10 = 1;
	Global_36763[251 /*12*/].f_11 = 0;
	Global_36763[251 /*12*/].f_4 = 0;
	Global_36763[252 /*12*/] = 671;
	Global_36763[252 /*12*/].f_1 = 672;
	Global_36763[252 /*12*/].f_2 = 19;
	Global_36763[252 /*12*/].f_3 = 1;
	Global_36763[252 /*12*/].f_10 = 1;
	Global_36763[252 /*12*/].f_11 = 0;
	Global_36763[252 /*12*/].f_4 = 0;
	Global_36763[253 /*12*/] = 673;
	Global_36763[253 /*12*/].f_1 = 674;
	Global_36763[253 /*12*/].f_2 = 19;
	Global_36763[253 /*12*/].f_3 = 1;
	Global_36763[253 /*12*/].f_10 = 1;
	Global_36763[253 /*12*/].f_11 = 0;
	Global_36763[253 /*12*/].f_4 = 0;
	Global_36763[254 /*12*/] = 675;
	Global_36763[254 /*12*/].f_1 = 676;
	Global_36763[254 /*12*/].f_2 = 19;
	Global_36763[254 /*12*/].f_3 = 1;
	Global_36763[254 /*12*/].f_10 = 1;
	Global_36763[254 /*12*/].f_11 = 0;
	Global_36763[254 /*12*/].f_4 = 0;
	Global_36763[255 /*12*/] = 679;
	Global_36763[255 /*12*/].f_1 = 680;
	Global_36763[255 /*12*/].f_2 = 19;
	Global_36763[255 /*12*/].f_3 = 1;
	Global_36763[255 /*12*/].f_10 = 1;
	Global_36763[255 /*12*/].f_11 = 0;
	Global_36763[255 /*12*/].f_4 = 0;
	Global_36763[256 /*12*/] = 677;
	Global_36763[256 /*12*/].f_1 = 678;
	Global_36763[256 /*12*/].f_2 = 19;
	Global_36763[256 /*12*/].f_3 = 1;
	Global_36763[256 /*12*/].f_10 = 1;
	Global_36763[256 /*12*/].f_11 = 0;
	Global_36763[256 /*12*/].f_4 = 0;
	Global_36763[257 /*12*/] = 681;
	Global_36763[257 /*12*/].f_1 = 682;
	Global_36763[257 /*12*/].f_2 = 19;
	Global_36763[257 /*12*/].f_3 = 1;
	Global_36763[257 /*12*/].f_10 = 1;
	Global_36763[257 /*12*/].f_11 = 0;
	Global_36763[257 /*12*/].f_4 = 0;
	Global_36763[258 /*12*/] = 683;
	Global_36763[258 /*12*/].f_1 = 684;
	Global_36763[258 /*12*/].f_2 = 19;
	Global_36763[258 /*12*/].f_3 = 1;
	Global_36763[258 /*12*/].f_10 = 1;
	Global_36763[258 /*12*/].f_11 = 0;
	Global_36763[258 /*12*/].f_4 = 0;
	Global_36763[259 /*12*/] = 685;
	Global_36763[259 /*12*/].f_1 = 686;
	Global_36763[259 /*12*/].f_2 = 19;
	Global_36763[259 /*12*/].f_3 = 1;
	Global_36763[259 /*12*/].f_10 = 1;
	Global_36763[259 /*12*/].f_11 = 0;
	Global_36763[259 /*12*/].f_4 = 0;
	Global_36763[260 /*12*/] = 687;
	Global_36763[260 /*12*/].f_1 = 688;
	Global_36763[260 /*12*/].f_2 = 19;
	Global_36763[260 /*12*/].f_3 = 1;
	Global_36763[260 /*12*/].f_10 = 1;
	Global_36763[260 /*12*/].f_11 = 0;
	Global_36763[260 /*12*/].f_4 = 0;
	Global_36763[261 /*12*/] = 691;
	Global_36763[261 /*12*/].f_1 = 692;
	Global_36763[261 /*12*/].f_2 = 19;
	Global_36763[261 /*12*/].f_3 = 1;
	Global_36763[261 /*12*/].f_10 = 1;
	Global_36763[261 /*12*/].f_11 = 0;
	Global_36763[261 /*12*/].f_4 = 0;
	Global_36763[262 /*12*/] = 689;
	Global_36763[262 /*12*/].f_1 = 690;
	Global_36763[262 /*12*/].f_2 = 19;
	Global_36763[262 /*12*/].f_3 = 1;
	Global_36763[262 /*12*/].f_10 = 1;
	Global_36763[262 /*12*/].f_11 = 0;
	Global_36763[262 /*12*/].f_4 = 0;
	Global_36763[263 /*12*/] = 693;
	Global_36763[263 /*12*/].f_1 = 694;
	Global_36763[263 /*12*/].f_2 = 19;
	Global_36763[263 /*12*/].f_3 = 1;
	Global_36763[263 /*12*/].f_10 = 1;
	Global_36763[263 /*12*/].f_11 = 0;
	Global_36763[263 /*12*/].f_4 = 0;
	Global_36763[264 /*12*/] = 695;
	Global_36763[264 /*12*/].f_1 = 696;
	Global_36763[264 /*12*/].f_2 = 19;
	Global_36763[264 /*12*/].f_3 = 1;
	Global_36763[264 /*12*/].f_10 = 1;
	Global_36763[264 /*12*/].f_11 = 0;
	Global_36763[264 /*12*/].f_4 = 0;
	Global_36763[265 /*12*/] = 697;
	Global_36763[265 /*12*/].f_1 = 698;
	Global_36763[265 /*12*/].f_2 = 19;
	Global_36763[265 /*12*/].f_3 = 1;
	Global_36763[265 /*12*/].f_10 = 1;
	Global_36763[265 /*12*/].f_11 = 0;
	Global_36763[265 /*12*/].f_4 = 0;
	Global_36763[266 /*12*/] = 699;
	Global_36763[266 /*12*/].f_1 = 700;
	Global_36763[266 /*12*/].f_2 = 19;
	Global_36763[266 /*12*/].f_3 = 1;
	Global_36763[266 /*12*/].f_10 = 1;
	Global_36763[266 /*12*/].f_11 = 0;
	Global_36763[266 /*12*/].f_4 = 0;
	Global_36763[267 /*12*/] = 701;
	Global_36763[267 /*12*/].f_1 = 702;
	Global_36763[267 /*12*/].f_2 = 19;
	Global_36763[267 /*12*/].f_3 = 1;
	Global_36763[267 /*12*/].f_10 = 1;
	Global_36763[267 /*12*/].f_11 = 0;
	Global_36763[267 /*12*/].f_4 = 0;
	Global_36763[268 /*12*/] = 703;
	Global_36763[268 /*12*/].f_1 = 704;
	Global_36763[268 /*12*/].f_2 = 19;
	Global_36763[268 /*12*/].f_3 = 1;
	Global_36763[268 /*12*/].f_10 = 1;
	Global_36763[268 /*12*/].f_11 = 0;
	Global_36763[268 /*12*/].f_4 = 0;
	Global_36763[269 /*12*/] = 705;
	Global_36763[269 /*12*/].f_1 = 706;
	Global_36763[269 /*12*/].f_2 = 19;
	Global_36763[269 /*12*/].f_3 = 1;
	Global_36763[269 /*12*/].f_10 = 1;
	Global_36763[269 /*12*/].f_11 = 0;
	Global_36763[269 /*12*/].f_4 = 0;
	Global_36763[270 /*12*/] = 707;
	Global_36763[270 /*12*/].f_1 = 708;
	Global_36763[270 /*12*/].f_2 = 16;
	Global_36763[270 /*12*/].f_3 = 0;
	Global_36763[270 /*12*/].f_10 = 1;
	Global_36763[270 /*12*/].f_11 = 0;
	Global_36763[270 /*12*/].f_4 = 0;
	Global_36763[271 /*12*/] = 709;
	Global_36763[271 /*12*/].f_1 = 710;
	Global_36763[271 /*12*/].f_2 = 16;
	Global_36763[271 /*12*/].f_3 = 0;
	Global_36763[271 /*12*/].f_10 = 1;
	Global_36763[271 /*12*/].f_11 = 0;
	Global_36763[271 /*12*/].f_4 = 0;
	Global_36763[272 /*12*/] = 711;
	Global_36763[272 /*12*/].f_1 = 712;
	Global_36763[272 /*12*/].f_2 = 16;
	Global_36763[272 /*12*/].f_3 = 0;
	Global_36763[272 /*12*/].f_10 = 1;
	Global_36763[272 /*12*/].f_11 = 0;
	Global_36763[272 /*12*/].f_4 = 0;
	Global_36763[273 /*12*/] = 713;
	Global_36763[273 /*12*/].f_1 = 714;
	Global_36763[273 /*12*/].f_2 = 16;
	Global_36763[273 /*12*/].f_3 = 0;
	Global_36763[273 /*12*/].f_10 = 1;
	Global_36763[273 /*12*/].f_11 = 0;
	Global_36763[273 /*12*/].f_4 = 0;
	Global_36763[274 /*12*/] = 715;
	Global_36763[274 /*12*/].f_1 = 716;
	Global_36763[274 /*12*/].f_2 = 16;
	Global_36763[274 /*12*/].f_3 = 0;
	Global_36763[274 /*12*/].f_10 = 1;
	Global_36763[274 /*12*/].f_11 = 0;
	Global_36763[274 /*12*/].f_4 = 0;
	Global_36763[275 /*12*/] = 717;
	Global_36763[275 /*12*/].f_1 = 718;
	Global_36763[275 /*12*/].f_2 = 16;
	Global_36763[275 /*12*/].f_3 = 0;
	Global_36763[275 /*12*/].f_10 = 1;
	Global_36763[275 /*12*/].f_11 = 0;
	Global_36763[275 /*12*/].f_4 = 0;
	Global_36763[276 /*12*/] = 719;
	Global_36763[276 /*12*/].f_1 = 720;
	Global_36763[276 /*12*/].f_2 = 16;
	Global_36763[276 /*12*/].f_3 = 0;
	Global_36763[276 /*12*/].f_10 = 1;
	Global_36763[276 /*12*/].f_11 = 0;
	Global_36763[276 /*12*/].f_4 = 0;
	Global_40088[0 /*46*/].f_45 = 0;
	Global_40088[0 /*46*/].f_31 = 0;
	Global_40088[0 /*46*/].f_42 = 0;
	Global_40088[0 /*46*/].f_43 = 0;
	Global_40088[0 /*46*/].f_2 = 2;
	Global_40088[0 /*46*/].f_3[0] = 0;
	Global_40088[0 /*46*/].f_3[1] = 4;
	Global_40088[0 /*46*/].f_30 = 8;
	Global_40088[0 /*46*/].f_8[0] = 0;
	Global_40088[0 /*46*/].f_8[1] = 1;
	Global_40088[0 /*46*/].f_8[2] = 2;
	Global_40088[0 /*46*/].f_8[3] = 3;
	Global_40088[0 /*46*/].f_8[4] = 4;
	Global_40088[0 /*46*/].f_8[5] = 5;
	Global_40088[0 /*46*/].f_8[6] = 6;
	Global_40088[0 /*46*/].f_8[7] = 9;
	Global_40088[1 /*46*/].f_45 = 0;
	Global_40088[1 /*46*/].f_31 = 0;
	Global_40088[1 /*46*/].f_42 = 0;
	Global_40088[1 /*46*/].f_43 = 0;
	Global_40088[1 /*46*/].f_2 = 3;
	Global_40088[1 /*46*/].f_3[0] = 5;
	Global_40088[1 /*46*/].f_3[1] = 0;
	Global_40088[1 /*46*/].f_3[2] = 4;
	Global_40088[1 /*46*/].f_30 = 3;
	Global_40088[1 /*46*/].f_8[0] = 10;
	Global_40088[1 /*46*/].f_8[1] = 11;
	Global_40088[1 /*46*/].f_8[2] = 16;
	Global_40088[2 /*46*/].f_45 = 0;
	Global_40088[2 /*46*/].f_31 = 0;
	Global_40088[2 /*46*/].f_42 = 0;
	Global_40088[2 /*46*/].f_43 = 0;
	Global_40088[2 /*46*/].f_2 = 2;
	Global_40088[2 /*46*/].f_3[0] = 7;
	Global_40088[2 /*46*/].f_3[1] = 1;
	Global_40088[2 /*46*/].f_30 = 1;
	Global_40088[2 /*46*/].f_8[0] = 12;
	Global_40088[3 /*46*/].f_45 = 0;
	Global_40088[3 /*46*/].f_31 = 0;
	Global_40088[3 /*46*/].f_42 = 0;
	Global_40088[3 /*46*/].f_43 = 0;
	Global_40088[3 /*46*/].f_2 = 2;
	Global_40088[3 /*46*/].f_3[0] = 7;
	Global_40088[3 /*46*/].f_3[1] = 1;
	Global_40088[3 /*46*/].f_30 = 1;
	Global_40088[3 /*46*/].f_8[0] = 14;
	Global_40088[4 /*46*/].f_45 = 0;
	Global_40088[4 /*46*/].f_31 = 0;
	Global_40088[4 /*46*/].f_42 = 0;
	Global_40088[4 /*46*/].f_43 = 0;
	Global_40088[4 /*46*/].f_2 = 2;
	Global_40088[4 /*46*/].f_3[0] = 7;
	Global_40088[4 /*46*/].f_3[1] = 1;
	Global_40088[4 /*46*/].f_30 = 1;
	Global_40088[4 /*46*/].f_8[0] = 13;
	Global_40088[5 /*46*/].f_45 = 0;
	Global_40088[5 /*46*/].f_31 = 0;
	Global_40088[5 /*46*/].f_42 = 0;
	Global_40088[5 /*46*/].f_43 = 0;
	Global_40088[5 /*46*/].f_2 = 2;
	Global_40088[5 /*46*/].f_3[0] = 7;
	Global_40088[5 /*46*/].f_3[1] = 1;
	Global_40088[5 /*46*/].f_30 = 1;
	Global_40088[5 /*46*/].f_8[0] = 15;
	Global_40088[6 /*46*/].f_45 = 0;
	Global_40088[6 /*46*/].f_31 = 0;
	Global_40088[6 /*46*/].f_42 = 0;
	Global_40088[6 /*46*/].f_43 = 0;
	Global_40088[6 /*46*/].f_2 = 2;
	Global_40088[6 /*46*/].f_3[0] = 0;
	Global_40088[6 /*46*/].f_3[1] = 8;
	Global_40088[6 /*46*/].f_30 = 5;
	Global_40088[6 /*46*/].f_8[0] = 17;
	Global_40088[6 /*46*/].f_8[1] = 19;
	Global_40088[6 /*46*/].f_8[2] = 20;
	Global_40088[6 /*46*/].f_8[3] = 21;
	Global_40088[6 /*46*/].f_8[4] = 22;
	Global_40088[7 /*46*/].f_45 = 0;
	Global_40088[7 /*46*/].f_31 = 0;
	Global_40088[7 /*46*/].f_42 = 0;
	Global_40088[7 /*46*/].f_43 = 0;
	Global_40088[7 /*46*/].f_2 = 2;
	Global_40088[7 /*46*/].f_3[0] = 1;
	Global_40088[7 /*46*/].f_3[1] = 9;
	Global_40088[7 /*46*/].f_30 = 5;
	Global_40088[7 /*46*/].f_8[0] = 18;
	Global_40088[7 /*46*/].f_8[1] = 24;
	Global_40088[7 /*46*/].f_8[2] = 25;
	Global_40088[7 /*46*/].f_8[3] = 26;
	Global_40088[7 /*46*/].f_8[4] = 27;
	Global_40088[8 /*46*/].f_45 = 0;
	Global_40088[8 /*46*/].f_31 = 0;
	Global_40088[8 /*46*/].f_42 = 0;
	Global_40088[8 /*46*/].f_43 = 0;
	Global_40088[8 /*46*/].f_2 = 2;
	Global_40088[8 /*46*/].f_3[0] = 2;
	Global_40088[8 /*46*/].f_3[1] = 10;
	Global_40088[8 /*46*/].f_30 = 4;
	Global_40088[8 /*46*/].f_8[0] = 23;
	Global_40088[8 /*46*/].f_8[1] = 28;
	Global_40088[8 /*46*/].f_8[2] = 29;
	Global_40088[8 /*46*/].f_8[3] = 30;
	Global_40088[9 /*46*/].f_45 = 0;
	Global_40088[9 /*46*/].f_31 = 0;
	Global_40088[9 /*46*/].f_42 = 0;
	Global_40088[9 /*46*/].f_43 = 0;
	Global_40088[9 /*46*/].f_2 = 1;
	Global_40088[9 /*46*/].f_3[0] = 11;
	Global_40088[9 /*46*/].f_30 = 3;
	Global_40088[9 /*46*/].f_8[0] = 31;
	Global_40088[9 /*46*/].f_8[1] = 32;
	Global_40088[9 /*46*/].f_8[2] = 33;
	Global_40088[10 /*46*/].f_45 = 0;
	Global_40088[10 /*46*/].f_31 = 0;
	Global_40088[10 /*46*/].f_42 = 0;
	Global_40088[10 /*46*/].f_43 = 0;
	Global_40088[10 /*46*/].f_2 = 1;
	Global_40088[10 /*46*/].f_3[0] = 13;
	Global_40088[10 /*46*/].f_30 = 3;
	Global_40088[10 /*46*/].f_8[0] = 34;
	Global_40088[10 /*46*/].f_8[1] = 35;
	Global_40088[10 /*46*/].f_8[2] = 36;
	Global_40088[11 /*46*/].f_45 = 0;
	Global_40088[11 /*46*/].f_31 = 0;
	Global_40088[11 /*46*/].f_42 = 0;
	Global_40088[11 /*46*/].f_43 = 0;
	Global_40088[11 /*46*/].f_2 = 1;
	Global_40088[11 /*46*/].f_3[0] = 14;
	Global_40088[11 /*46*/].f_30 = 3;
	Global_40088[11 /*46*/].f_8[0] = 37;
	Global_40088[11 /*46*/].f_8[1] = 38;
	Global_40088[11 /*46*/].f_8[2] = 39;
	Global_40088[12 /*46*/].f_45 = 0;
	Global_40088[12 /*46*/].f_31 = 0;
	Global_40088[12 /*46*/].f_42 = 0;
	Global_40088[12 /*46*/].f_43 = 0;
	Global_40088[12 /*46*/].f_2 = 1;
	Global_40088[12 /*46*/].f_3[0] = 12;
	Global_40088[12 /*46*/].f_30 = 6;
	Global_40088[12 /*46*/].f_8[0] = 40;
	Global_40088[12 /*46*/].f_8[1] = 41;
	Global_40088[12 /*46*/].f_8[2] = 42;
	Global_40088[12 /*46*/].f_8[3] = 191;
	Global_40088[12 /*46*/].f_8[4] = 192;
	Global_40088[12 /*46*/].f_8[5] = 193;
	Global_40088[13 /*46*/].f_45 = 0;
	Global_40088[13 /*46*/].f_31 = 0;
	Global_40088[13 /*46*/].f_42 = 0;
	Global_40088[13 /*46*/].f_43 = 0;
	Global_40088[13 /*46*/].f_2 = 2;
	Global_40088[13 /*46*/].f_3[0] = 7;
	Global_40088[13 /*46*/].f_3[1] = 0;
	Global_40088[13 /*46*/].f_30 = 1;
	Global_40088[13 /*46*/].f_8[0] = 43;
	Global_40088[14 /*46*/].f_45 = 0;
	Global_40088[14 /*46*/].f_31 = 0;
	Global_40088[14 /*46*/].f_42 = 0;
	Global_40088[14 /*46*/].f_43 = 0;
	Global_40088[14 /*46*/].f_2 = 4;
	Global_40088[14 /*46*/].f_3[0] = 15;
	Global_40088[14 /*46*/].f_3[1] = 0;
	Global_40088[14 /*46*/].f_3[2] = 1;
	Global_40088[14 /*46*/].f_3[3] = 2;
	Global_40088[14 /*46*/].f_30 = 3;
	Global_40088[14 /*46*/].f_8[0] = 44;
	Global_40088[14 /*46*/].f_8[1] = 45;
	Global_40088[14 /*46*/].f_8[2] = 46;
	Global_40088[15 /*46*/].f_45 = 0;
	Global_40088[15 /*46*/].f_31 = 0;
	Global_40088[15 /*46*/].f_42 = 0;
	Global_40088[15 /*46*/].f_43 = 0;
	Global_40088[15 /*46*/].f_2 = 4;
	Global_40088[15 /*46*/].f_3[0] = 16;
	Global_40088[15 /*46*/].f_3[1] = 0;
	Global_40088[15 /*46*/].f_3[2] = 1;
	Global_40088[15 /*46*/].f_3[3] = 2;
	Global_40088[15 /*46*/].f_30 = 1;
	Global_40088[15 /*46*/].f_8[0] = 47;
	Global_40088[16 /*46*/].f_45 = 0;
	Global_40088[16 /*46*/].f_31 = 0;
	Global_40088[16 /*46*/].f_42 = 0;
	Global_40088[16 /*46*/].f_43 = 0;
	Global_40088[16 /*46*/].f_2 = 4;
	Global_40088[16 /*46*/].f_3[0] = 16;
	Global_40088[16 /*46*/].f_3[1] = 0;
	Global_40088[16 /*46*/].f_3[2] = 1;
	Global_40088[16 /*46*/].f_3[3] = 2;
	Global_40088[16 /*46*/].f_30 = 1;
	Global_40088[16 /*46*/].f_8[0] = 48;
	Global_40088[17 /*46*/].f_45 = 0;
	Global_40088[17 /*46*/].f_31 = 0;
	Global_40088[17 /*46*/].f_42 = 0;
	Global_40088[17 /*46*/].f_43 = 0;
	Global_40088[17 /*46*/].f_2 = 4;
	Global_40088[17 /*46*/].f_3[0] = 0;
	Global_40088[17 /*46*/].f_3[1] = 1;
	Global_40088[17 /*46*/].f_3[2] = 2;
	Global_40088[17 /*46*/].f_3[3] = 16;
	Global_40088[17 /*46*/].f_30 = 1;
	Global_40088[17 /*46*/].f_8[0] = 49;
	Global_40088[18 /*46*/].f_45 = 0;
	Global_40088[18 /*46*/].f_31 = 0;
	Global_40088[18 /*46*/].f_42 = 0;
	Global_40088[18 /*46*/].f_43 = 0;
	Global_40088[18 /*46*/].f_2 = 4;
	Global_40088[18 /*46*/].f_3[0] = 0;
	Global_40088[18 /*46*/].f_3[1] = 1;
	Global_40088[18 /*46*/].f_3[2] = 2;
	Global_40088[18 /*46*/].f_3[3] = 16;
	Global_40088[18 /*46*/].f_30 = 1;
	Global_40088[18 /*46*/].f_8[0] = 50;
	Global_40088[19 /*46*/].f_45 = 0;
	Global_40088[19 /*46*/].f_31 = 0;
	Global_40088[19 /*46*/].f_42 = 0;
	Global_40088[19 /*46*/].f_43 = 0;
	Global_40088[19 /*46*/].f_2 = 4;
	Global_40088[19 /*46*/].f_3[0] = 0;
	Global_40088[19 /*46*/].f_3[1] = 1;
	Global_40088[19 /*46*/].f_3[2] = 2;
	Global_40088[19 /*46*/].f_3[3] = 16;
	Global_40088[19 /*46*/].f_30 = 1;
	Global_40088[19 /*46*/].f_8[0] = 51;
	Global_40088[20 /*46*/].f_45 = 0;
	Global_40088[20 /*46*/].f_31 = 0;
	Global_40088[20 /*46*/].f_42 = 0;
	Global_40088[20 /*46*/].f_43 = 0;
	Global_40088[20 /*46*/].f_2 = 4;
	Global_40088[20 /*46*/].f_3[0] = 0;
	Global_40088[20 /*46*/].f_3[1] = 1;
	Global_40088[20 /*46*/].f_3[2] = 2;
	Global_40088[20 /*46*/].f_3[3] = 16;
	Global_40088[20 /*46*/].f_30 = 1;
	Global_40088[20 /*46*/].f_8[0] = 52;
	Global_40088[21 /*46*/].f_45 = 0;
	Global_40088[21 /*46*/].f_31 = 0;
	Global_40088[21 /*46*/].f_42 = 0;
	Global_40088[21 /*46*/].f_43 = 0;
	Global_40088[21 /*46*/].f_2 = 4;
	Global_40088[21 /*46*/].f_3[0] = 16;
	Global_40088[21 /*46*/].f_3[1] = 0;
	Global_40088[21 /*46*/].f_3[2] = 1;
	Global_40088[21 /*46*/].f_3[3] = 2;
	Global_40088[21 /*46*/].f_30 = 1;
	Global_40088[21 /*46*/].f_8[0] = 53;
	Global_40088[22 /*46*/].f_45 = 0;
	Global_40088[22 /*46*/].f_31 = 0;
	Global_40088[22 /*46*/].f_42 = 0;
	Global_40088[22 /*46*/].f_43 = 0;
	Global_40088[22 /*46*/].f_2 = 4;
	Global_40088[22 /*46*/].f_3[0] = 0;
	Global_40088[22 /*46*/].f_3[1] = 1;
	Global_40088[22 /*46*/].f_3[2] = 2;
	Global_40088[22 /*46*/].f_3[3] = 16;
	Global_40088[22 /*46*/].f_30 = 1;
	Global_40088[22 /*46*/].f_8[0] = 54;
	Global_40088[23 /*46*/].f_45 = 0;
	Global_40088[23 /*46*/].f_31 = 0;
	Global_40088[23 /*46*/].f_42 = 0;
	Global_40088[23 /*46*/].f_43 = 0;
	Global_40088[23 /*46*/].f_2 = 1;
	Global_40088[23 /*46*/].f_3[0] = 12;
	Global_40088[23 /*46*/].f_30 = 3;
	Global_40088[23 /*46*/].f_8[0] = 55;
	Global_40088[23 /*46*/].f_8[1] = 58;
	Global_40088[23 /*46*/].f_8[2] = 59;
	Global_40088[24 /*46*/].f_45 = 0;
	Global_40088[24 /*46*/].f_31 = 0;
	Global_40088[24 /*46*/].f_42 = 0;
	Global_40088[24 /*46*/].f_43 = 0;
	Global_40088[24 /*46*/].f_2 = 1;
	Global_40088[24 /*46*/].f_3[0] = 14;
	Global_40088[24 /*46*/].f_30 = 3;
	Global_40088[24 /*46*/].f_8[0] = 56;
	Global_40088[24 /*46*/].f_8[1] = 60;
	Global_40088[24 /*46*/].f_8[2] = 61;
	Global_40088[25 /*46*/].f_45 = 0;
	Global_40088[25 /*46*/].f_31 = 0;
	Global_40088[25 /*46*/].f_42 = 0;
	Global_40088[25 /*46*/].f_43 = 0;
	Global_40088[25 /*46*/].f_2 = 1;
	Global_40088[25 /*46*/].f_3[0] = 12;
	Global_40088[25 /*46*/].f_30 = 3;
	Global_40088[25 /*46*/].f_8[0] = 57;
	Global_40088[25 /*46*/].f_8[1] = 62;
	Global_40088[25 /*46*/].f_8[2] = 63;
	Global_40088[26 /*46*/].f_45 = 0;
	Global_40088[26 /*46*/].f_31 = 0;
	Global_40088[26 /*46*/].f_42 = 0;
	Global_40088[26 /*46*/].f_43 = 0;
	Global_40088[26 /*46*/].f_2 = 4;
	Global_40088[26 /*46*/].f_3[0] = 1;
	Global_40088[26 /*46*/].f_3[1] = 0;
	Global_40088[26 /*46*/].f_3[2] = 2;
	Global_40088[26 /*46*/].f_3[3] = 20;
	Global_40088[26 /*46*/].f_30 = 1;
	Global_40088[26 /*46*/].f_8[0] = 64;
	Global_40088[27 /*46*/].f_45 = 0;
	Global_40088[27 /*46*/].f_31 = 0;
	Global_40088[27 /*46*/].f_42 = 0;
	Global_40088[27 /*46*/].f_43 = 0;
	Global_40088[27 /*46*/].f_2 = 4;
	Global_40088[27 /*46*/].f_3[0] = 17;
	Global_40088[27 /*46*/].f_3[1] = 0;
	Global_40088[27 /*46*/].f_3[2] = 1;
	Global_40088[27 /*46*/].f_3[3] = 2;
	Global_40088[27 /*46*/].f_30 = 1;
	Global_40088[27 /*46*/].f_8[0] = 66;
	Global_40088[28 /*46*/].f_45 = 0;
	Global_40088[28 /*46*/].f_31 = 0;
	Global_40088[28 /*46*/].f_42 = 0;
	Global_40088[28 /*46*/].f_43 = 0;
	Global_40088[28 /*46*/].f_2 = 4;
	Global_40088[28 /*46*/].f_3[0] = 18;
	Global_40088[28 /*46*/].f_3[1] = 0;
	Global_40088[28 /*46*/].f_3[2] = 1;
	Global_40088[28 /*46*/].f_3[3] = 2;
	Global_40088[28 /*46*/].f_30 = 1;
	Global_40088[28 /*46*/].f_8[0] = 65;
	Global_40088[29 /*46*/].f_45 = 0;
	Global_40088[29 /*46*/].f_31 = 0;
	Global_40088[29 /*46*/].f_42 = 0;
	Global_40088[29 /*46*/].f_43 = 0;
	Global_40088[29 /*46*/].f_2 = 2;
	Global_40088[29 /*46*/].f_3[0] = 2;
	Global_40088[29 /*46*/].f_3[1] = 63;
	Global_40088[29 /*46*/].f_30 = 1;
	Global_40088[29 /*46*/].f_8[0] = 67;
	Global_40088[30 /*46*/].f_45 = 0;
	Global_40088[30 /*46*/].f_31 = 0;
	Global_40088[30 /*46*/].f_42 = 0;
	Global_40088[30 /*46*/].f_43 = 0;
	Global_40088[30 /*46*/].f_2 = 3;
	Global_40088[30 /*46*/].f_3[0] = 0;
	Global_40088[30 /*46*/].f_3[1] = 1;
	Global_40088[30 /*46*/].f_3[2] = 2;
	Global_40088[30 /*46*/].f_30 = 1;
	Global_40088[30 /*46*/].f_8[0] = 68;
	Global_40088[31 /*46*/].f_45 = 0;
	Global_40088[31 /*46*/].f_31 = 0;
	Global_40088[31 /*46*/].f_42 = 0;
	Global_40088[31 /*46*/].f_43 = 0;
	Global_40088[31 /*46*/].f_2 = 2;
	Global_40088[31 /*46*/].f_3[0] = 0;
	Global_40088[31 /*46*/].f_3[1] = 64;
	Global_40088[31 /*46*/].f_30 = 1;
	Global_40088[31 /*46*/].f_8[0] = 69;
	Global_40088[32 /*46*/].f_45 = 0;
	Global_40088[32 /*46*/].f_31 = 0;
	Global_40088[32 /*46*/].f_42 = 0;
	Global_40088[32 /*46*/].f_43 = 0;
	Global_40088[32 /*46*/].f_2 = 2;
	Global_40088[32 /*46*/].f_3[0] = 1;
	Global_40088[32 /*46*/].f_3[1] = 64;
	Global_40088[32 /*46*/].f_30 = 1;
	Global_40088[32 /*46*/].f_8[0] = 70;
	Global_40088[33 /*46*/].f_45 = 0;
	Global_40088[33 /*46*/].f_31 = 0;
	Global_40088[33 /*46*/].f_42 = 0;
	Global_40088[33 /*46*/].f_43 = 0;
	Global_40088[33 /*46*/].f_2 = 2;
	Global_40088[33 /*46*/].f_3[0] = 2;
	Global_40088[33 /*46*/].f_3[1] = 64;
	Global_40088[33 /*46*/].f_30 = 1;
	Global_40088[33 /*46*/].f_8[0] = 71;
	Global_40088[34 /*46*/].f_45 = 0;
	Global_40088[34 /*46*/].f_31 = 0;
	Global_40088[34 /*46*/].f_42 = 0;
	Global_40088[34 /*46*/].f_43 = 0;
	Global_40088[34 /*46*/].f_2 = 1;
	Global_40088[34 /*46*/].f_3[0] = 21;
	Global_40088[34 /*46*/].f_30 = 1;
	Global_40088[34 /*46*/].f_8[0] = 72;
	Global_40088[35 /*46*/].f_45 = 0;
	Global_40088[35 /*46*/].f_31 = 0;
	Global_40088[35 /*46*/].f_42 = 0;
	Global_40088[35 /*46*/].f_43 = 0;
	Global_40088[35 /*46*/].f_2 = 1;
	Global_40088[35 /*46*/].f_3[0] = 21;
	Global_40088[35 /*46*/].f_30 = 1;
	Global_40088[35 /*46*/].f_8[0] = 73;
	Global_40088[36 /*46*/].f_45 = 0;
	Global_40088[36 /*46*/].f_31 = 0;
	Global_40088[36 /*46*/].f_42 = 0;
	Global_40088[36 /*46*/].f_43 = 0;
	Global_40088[36 /*46*/].f_2 = 1;
	Global_40088[36 /*46*/].f_3[0] = 21;
	Global_40088[36 /*46*/].f_30 = 1;
	Global_40088[36 /*46*/].f_8[0] = 74;
	Global_40088[37 /*46*/].f_45 = 0;
	Global_40088[37 /*46*/].f_31 = 0;
	Global_40088[37 /*46*/].f_42 = 0;
	Global_40088[37 /*46*/].f_43 = 0;
	Global_40088[37 /*46*/].f_2 = 2;
	Global_40088[37 /*46*/].f_3[0] = 6;
	Global_40088[37 /*46*/].f_3[1] = 2;
	Global_40088[37 /*46*/].f_30 = 9;
	Global_40088[37 /*46*/].f_8[0] = 75;
	Global_40088[37 /*46*/].f_8[1] = 76;
	Global_40088[37 /*46*/].f_8[2] = 77;
	Global_40088[37 /*46*/].f_8[3] = 78;
	Global_40088[37 /*46*/].f_8[4] = 79;
	Global_40088[37 /*46*/].f_8[5] = 80;
	Global_40088[37 /*46*/].f_8[6] = 81;
	Global_40088[37 /*46*/].f_8[7] = 82;
	Global_40088[37 /*46*/].f_8[8] = 83;
	Global_40088[38 /*46*/].f_45 = 0;
	Global_40088[38 /*46*/].f_31 = 0;
	Global_40088[38 /*46*/].f_42 = 0;
	Global_40088[38 /*46*/].f_43 = 0;
	Global_40088[38 /*46*/].f_2 = 2;
	Global_40088[38 /*46*/].f_3[0] = 0;
	Global_40088[38 /*46*/].f_3[1] = 4;
	Global_40088[38 /*46*/].f_30 = 1;
	Global_40088[38 /*46*/].f_8[0] = 84;
	Global_40088[39 /*46*/].f_45 = 0;
	Global_40088[39 /*46*/].f_31 = 0;
	Global_40088[39 /*46*/].f_42 = 0;
	Global_40088[39 /*46*/].f_43 = 0;
	Global_40088[39 /*46*/].f_2 = 4;
	Global_40088[39 /*46*/].f_3[0] = 22;
	Global_40088[39 /*46*/].f_3[1] = 0;
	Global_40088[39 /*46*/].f_3[2] = 1;
	Global_40088[39 /*46*/].f_3[3] = 2;
	Global_40088[39 /*46*/].f_30 = 1;
	Global_40088[39 /*46*/].f_8[0] = 85;
	Global_40088[40 /*46*/].f_45 = 0;
	Global_40088[40 /*46*/].f_31 = 0;
	Global_40088[40 /*46*/].f_42 = 0;
	Global_40088[40 /*46*/].f_43 = 0;
	Global_40088[40 /*46*/].f_2 = 2;
	Global_40088[40 /*46*/].f_3[0] = 0;
	Global_40088[40 /*46*/].f_3[1] = 24;
	Global_40088[40 /*46*/].f_30 = 3;
	Global_40088[40 /*46*/].f_8[0] = 86;
	Global_40088[40 /*46*/].f_8[1] = 87;
	Global_40088[40 /*46*/].f_8[2] = 88;
	Global_40088[41 /*46*/].f_45 = 0;
	Global_40088[41 /*46*/].f_31 = 0;
	Global_40088[41 /*46*/].f_42 = 0;
	Global_40088[41 /*46*/].f_43 = 0;
	Global_40088[41 /*46*/].f_2 = 2;
	Global_40088[41 /*46*/].f_3[0] = 0;
	Global_40088[41 /*46*/].f_3[1] = 24;
	Global_40088[41 /*46*/].f_30 = 3;
	Global_40088[41 /*46*/].f_8[0] = 89;
	Global_40088[41 /*46*/].f_8[1] = 90;
	Global_40088[41 /*46*/].f_8[2] = 91;
	Global_40088[42 /*46*/].f_45 = 0;
	Global_40088[42 /*46*/].f_31 = 0;
	Global_40088[42 /*46*/].f_42 = 0;
	Global_40088[42 /*46*/].f_43 = 0;
	Global_40088[42 /*46*/].f_2 = 2;
	Global_40088[42 /*46*/].f_3[0] = 0;
	Global_40088[42 /*46*/].f_3[1] = 25;
	Global_40088[42 /*46*/].f_30 = 5;
	Global_40088[42 /*46*/].f_8[0] = 92;
	Global_40088[42 /*46*/].f_8[1] = 93;
	Global_40088[42 /*46*/].f_8[2] = 94;
	Global_40088[42 /*46*/].f_8[3] = 95;
	Global_40088[42 /*46*/].f_8[4] = 96;
	Global_40088[43 /*46*/].f_45 = 0;
	Global_40088[43 /*46*/].f_31 = 0;
	Global_40088[43 /*46*/].f_42 = 0;
	Global_40088[43 /*46*/].f_43 = 0;
	Global_40088[43 /*46*/].f_2 = 2;
	Global_40088[43 /*46*/].f_3[0] = 26;
	Global_40088[43 /*46*/].f_3[1] = 0;
	Global_40088[43 /*46*/].f_30 = 2;
	Global_40088[43 /*46*/].f_8[0] = 97;
	Global_40088[43 /*46*/].f_8[1] = 98;
	Global_40088[44 /*46*/].f_45 = 0;
	Global_40088[44 /*46*/].f_31 = 0;
	Global_40088[44 /*46*/].f_42 = 0;
	Global_40088[44 /*46*/].f_43 = 0;
	Global_40088[44 /*46*/].f_2 = 2;
	Global_40088[44 /*46*/].f_3[0] = 27;
	Global_40088[44 /*46*/].f_3[1] = 0;
	Global_40088[44 /*46*/].f_30 = 2;
	Global_40088[44 /*46*/].f_8[0] = 99;
	Global_40088[44 /*46*/].f_8[1] = 100;
	Global_40088[45 /*46*/].f_45 = 0;
	Global_40088[45 /*46*/].f_31 = 0;
	Global_40088[45 /*46*/].f_42 = 0;
	Global_40088[45 /*46*/].f_43 = 0;
	Global_40088[45 /*46*/].f_2 = 3;
	Global_40088[45 /*46*/].f_3[0] = 0;
	Global_40088[45 /*46*/].f_3[1] = 2;
	Global_40088[45 /*46*/].f_3[2] = 28;
	Global_40088[45 /*46*/].f_30 = 1;
	Global_40088[45 /*46*/].f_8[0] = 101;
	Global_40088[46 /*46*/].f_45 = 0;
	Global_40088[46 /*46*/].f_31 = 0;
	Global_40088[46 /*46*/].f_42 = 0;
	Global_40088[46 /*46*/].f_43 = 0;
	Global_40088[46 /*46*/].f_2 = 2;
	Global_40088[46 /*46*/].f_3[0] = 0;
	Global_40088[46 /*46*/].f_3[1] = 26;
	Global_40088[46 /*46*/].f_30 = 2;
	Global_40088[46 /*46*/].f_8[0] = 102;
	Global_40088[46 /*46*/].f_8[1] = 103;
	Global_40088[47 /*46*/].f_45 = 0;
	Global_40088[47 /*46*/].f_31 = 0;
	Global_40088[47 /*46*/].f_42 = 0;
	Global_40088[47 /*46*/].f_43 = 0;
	Global_40088[47 /*46*/].f_2 = 2;
	Global_40088[47 /*46*/].f_3[0] = 0;
	Global_40088[47 /*46*/].f_3[1] = 29;
	Global_40088[47 /*46*/].f_30 = 2;
	Global_40088[47 /*46*/].f_8[0] = 104;
	Global_40088[47 /*46*/].f_8[1] = 105;
	Global_40088[48 /*46*/].f_45 = 0;
	Global_40088[48 /*46*/].f_31 = 0;
	Global_40088[48 /*46*/].f_42 = 0;
	Global_40088[48 /*46*/].f_43 = 0;
	Global_40088[48 /*46*/].f_2 = 2;
	Global_40088[48 /*46*/].f_3[0] = 1;
	Global_40088[48 /*46*/].f_3[1] = 30;
	Global_40088[48 /*46*/].f_30 = 5;
	Global_40088[48 /*46*/].f_8[0] = 106;
	Global_40088[48 /*46*/].f_8[1] = 107;
	Global_40088[48 /*46*/].f_8[2] = 108;
	Global_40088[48 /*46*/].f_8[3] = 109;
	Global_40088[48 /*46*/].f_8[4] = 110;
	Global_40088[49 /*46*/].f_45 = 0;
	Global_40088[49 /*46*/].f_31 = 0;
	Global_40088[49 /*46*/].f_42 = 0;
	Global_40088[49 /*46*/].f_43 = 0;
	Global_40088[49 /*46*/].f_2 = 2;
	Global_40088[49 /*46*/].f_3[0] = 1;
	Global_40088[49 /*46*/].f_3[1] = 31;
	Global_40088[49 /*46*/].f_30 = 2;
	Global_40088[49 /*46*/].f_8[0] = 111;
	Global_40088[49 /*46*/].f_8[1] = 112;
	Global_40088[50 /*46*/].f_45 = 0;
	Global_40088[50 /*46*/].f_31 = 0;
	Global_40088[50 /*46*/].f_42 = 0;
	Global_40088[50 /*46*/].f_43 = 0;
	Global_40088[50 /*46*/].f_2 = 2;
	Global_40088[50 /*46*/].f_3[0] = 1;
	Global_40088[50 /*46*/].f_3[1] = 32;
	Global_40088[50 /*46*/].f_30 = 3;
	Global_40088[50 /*46*/].f_8[0] = 113;
	Global_40088[50 /*46*/].f_8[1] = 114;
	Global_40088[50 /*46*/].f_8[2] = 115;
	Global_40088[51 /*46*/].f_45 = 0;
	Global_40088[51 /*46*/].f_31 = 0;
	Global_40088[51 /*46*/].f_42 = 0;
	Global_40088[51 /*46*/].f_43 = 0;
	Global_40088[51 /*46*/].f_2 = 2;
	Global_40088[51 /*46*/].f_3[0] = 1;
	Global_40088[51 /*46*/].f_3[1] = 32;
	Global_40088[51 /*46*/].f_30 = 2;
	Global_40088[51 /*46*/].f_8[0] = 116;
	Global_40088[51 /*46*/].f_8[1] = 117;
	Global_40088[52 /*46*/].f_45 = 0;
	Global_40088[52 /*46*/].f_31 = 0;
	Global_40088[52 /*46*/].f_42 = 0;
	Global_40088[52 /*46*/].f_43 = 0;
	Global_40088[52 /*46*/].f_2 = 2;
	Global_40088[52 /*46*/].f_3[0] = 1;
	Global_40088[52 /*46*/].f_3[1] = 32;
	Global_40088[52 /*46*/].f_30 = 2;
	Global_40088[52 /*46*/].f_8[0] = 118;
	Global_40088[52 /*46*/].f_8[1] = 119;
	Global_40088[53 /*46*/].f_45 = 0;
	Global_40088[53 /*46*/].f_31 = 0;
	Global_40088[53 /*46*/].f_42 = 0;
	Global_40088[53 /*46*/].f_43 = 0;
	Global_40088[53 /*46*/].f_2 = 2;
	Global_40088[53 /*46*/].f_3[0] = 1;
	Global_40088[53 /*46*/].f_3[1] = 32;
	Global_40088[53 /*46*/].f_30 = 4;
	Global_40088[53 /*46*/].f_8[0] = 120;
	Global_40088[53 /*46*/].f_8[1] = 121;
	Global_40088[53 /*46*/].f_8[2] = 122;
	Global_40088[53 /*46*/].f_8[3] = 123;
	Global_40088[54 /*46*/].f_45 = 0;
	Global_40088[54 /*46*/].f_31 = 0;
	Global_40088[54 /*46*/].f_42 = 0;
	Global_40088[54 /*46*/].f_43 = 0;
	Global_40088[54 /*46*/].f_2 = 2;
	Global_40088[54 /*46*/].f_3[0] = 1;
	Global_40088[54 /*46*/].f_3[1] = 27;
	Global_40088[54 /*46*/].f_30 = 2;
	Global_40088[54 /*46*/].f_8[0] = 124;
	Global_40088[54 /*46*/].f_8[1] = 125;
	Global_40088[55 /*46*/].f_45 = 0;
	Global_40088[55 /*46*/].f_31 = 0;
	Global_40088[55 /*46*/].f_42 = 0;
	Global_40088[55 /*46*/].f_43 = 0;
	Global_40088[55 /*46*/].f_2 = 2;
	Global_40088[55 /*46*/].f_3[0] = 1;
	Global_40088[55 /*46*/].f_3[1] = 2;
	Global_40088[55 /*46*/].f_30 = 5;
	Global_40088[55 /*46*/].f_8[0] = 126;
	Global_40088[55 /*46*/].f_8[1] = 127;
	Global_40088[55 /*46*/].f_8[2] = 128;
	Global_40088[55 /*46*/].f_8[3] = 129;
	Global_40088[55 /*46*/].f_8[4] = 130;
	Global_40088[56 /*46*/].f_45 = 0;
	Global_40088[56 /*46*/].f_31 = 0;
	Global_40088[56 /*46*/].f_42 = 0;
	Global_40088[56 /*46*/].f_43 = 0;
	Global_40088[56 /*46*/].f_2 = 2;
	Global_40088[56 /*46*/].f_3[0] = 1;
	Global_40088[56 /*46*/].f_3[1] = 0;
	Global_40088[56 /*46*/].f_30 = 3;
	Global_40088[56 /*46*/].f_8[0] = 131;
	Global_40088[56 /*46*/].f_8[1] = 132;
	Global_40088[56 /*46*/].f_8[2] = 133;
	Global_40088[57 /*46*/].f_45 = 0;
	Global_40088[57 /*46*/].f_31 = 0;
	Global_40088[57 /*46*/].f_42 = 0;
	Global_40088[57 /*46*/].f_43 = 0;
	Global_40088[57 /*46*/].f_2 = 2;
	Global_40088[57 /*46*/].f_3[0] = 0;
	Global_40088[57 /*46*/].f_3[1] = 1;
	Global_40088[57 /*46*/].f_30 = 2;
	Global_40088[57 /*46*/].f_8[0] = 134;
	Global_40088[57 /*46*/].f_8[1] = 135;
	Global_40088[58 /*46*/].f_45 = 0;
	Global_40088[58 /*46*/].f_31 = 0;
	Global_40088[58 /*46*/].f_42 = 0;
	Global_40088[58 /*46*/].f_43 = 0;
	Global_40088[58 /*46*/].f_2 = 2;
	Global_40088[58 /*46*/].f_3[0] = 2;
	Global_40088[58 /*46*/].f_3[1] = 33;
	Global_40088[58 /*46*/].f_30 = 2;
	Global_40088[58 /*46*/].f_8[0] = 136;
	Global_40088[58 /*46*/].f_8[1] = 137;
	Global_40088[59 /*46*/].f_45 = 0;
	Global_40088[59 /*46*/].f_31 = 0;
	Global_40088[59 /*46*/].f_42 = 0;
	Global_40088[59 /*46*/].f_43 = 0;
	Global_40088[59 /*46*/].f_2 = 2;
	Global_40088[59 /*46*/].f_3[0] = 2;
	Global_40088[59 /*46*/].f_3[1] = 33;
	Global_40088[59 /*46*/].f_30 = 3;
	Global_40088[59 /*46*/].f_8[0] = 138;
	Global_40088[59 /*46*/].f_8[1] = 139;
	Global_40088[59 /*46*/].f_8[2] = 248;
	Global_40088[60 /*46*/].f_45 = 0;
	Global_40088[60 /*46*/].f_31 = 0;
	Global_40088[60 /*46*/].f_42 = 0;
	Global_40088[60 /*46*/].f_43 = 0;
	Global_40088[60 /*46*/].f_2 = 2;
	Global_40088[60 /*46*/].f_3[0] = 2;
	Global_40088[60 /*46*/].f_3[1] = 33;
	Global_40088[60 /*46*/].f_30 = 1;
	Global_40088[60 /*46*/].f_8[0] = 140;
	Global_40088[61 /*46*/].f_45 = 0;
	Global_40088[61 /*46*/].f_31 = 0;
	Global_40088[61 /*46*/].f_42 = 0;
	Global_40088[61 /*46*/].f_43 = 0;
	Global_40088[61 /*46*/].f_2 = 2;
	Global_40088[61 /*46*/].f_3[0] = 2;
	Global_40088[61 /*46*/].f_3[1] = 29;
	Global_40088[61 /*46*/].f_30 = 2;
	Global_40088[61 /*46*/].f_8[0] = 141;
	Global_40088[61 /*46*/].f_8[1] = 142;
	Global_40088[62 /*46*/].f_45 = 0;
	Global_40088[62 /*46*/].f_31 = 0;
	Global_40088[62 /*46*/].f_42 = 0;
	Global_40088[62 /*46*/].f_43 = 0;
	Global_40088[62 /*46*/].f_2 = 2;
	Global_40088[62 /*46*/].f_3[0] = 3;
	Global_40088[62 /*46*/].f_3[1] = 2;
	Global_40088[62 /*46*/].f_30 = 2;
	Global_40088[62 /*46*/].f_8[0] = 143;
	Global_40088[62 /*46*/].f_8[1] = 144;
	Global_40088[63 /*46*/].f_45 = 0;
	Global_40088[63 /*46*/].f_31 = 0;
	Global_40088[63 /*46*/].f_42 = 0;
	Global_40088[63 /*46*/].f_43 = 0;
	Global_40088[63 /*46*/].f_2 = 2;
	Global_40088[63 /*46*/].f_3[0] = 2;
	Global_40088[63 /*46*/].f_3[1] = 34;
	Global_40088[63 /*46*/].f_30 = 2;
	Global_40088[63 /*46*/].f_8[0] = 145;
	Global_40088[63 /*46*/].f_8[1] = 146;
	Global_40088[64 /*46*/].f_45 = 0;
	Global_40088[64 /*46*/].f_31 = 0;
	Global_40088[64 /*46*/].f_42 = 0;
	Global_40088[64 /*46*/].f_43 = 0;
	Global_40088[64 /*46*/].f_2 = 2;
	Global_40088[64 /*46*/].f_3[0] = 2;
	Global_40088[64 /*46*/].f_3[1] = 26;
	Global_40088[64 /*46*/].f_30 = 1;
	Global_40088[64 /*46*/].f_8[0] = 147;
	Global_40088[65 /*46*/].f_45 = 0;
	Global_40088[65 /*46*/].f_31 = 0;
	Global_40088[65 /*46*/].f_42 = 0;
	Global_40088[65 /*46*/].f_43 = 0;
	Global_40088[65 /*46*/].f_2 = 1;
	Global_40088[65 /*46*/].f_3[0] = 35;
	Global_40088[65 /*46*/].f_30 = 3;
	Global_40088[65 /*46*/].f_8[0] = 148;
	Global_40088[65 /*46*/].f_8[1] = 149;
	Global_40088[65 /*46*/].f_8[2] = 150;
	Global_40088[66 /*46*/].f_45 = 0;
	Global_40088[66 /*46*/].f_31 = 0;
	Global_40088[66 /*46*/].f_42 = 0;
	Global_40088[66 /*46*/].f_43 = 0;
	Global_40088[66 /*46*/].f_2 = 1;
	Global_40088[66 /*46*/].f_3[0] = 36;
	Global_40088[66 /*46*/].f_30 = 3;
	Global_40088[66 /*46*/].f_8[0] = 151;
	Global_40088[66 /*46*/].f_8[1] = 152;
	Global_40088[66 /*46*/].f_8[2] = 153;
	Global_40088[67 /*46*/].f_45 = 0;
	Global_40088[67 /*46*/].f_31 = 0;
	Global_40088[67 /*46*/].f_42 = 0;
	Global_40088[67 /*46*/].f_43 = 0;
	Global_40088[67 /*46*/].f_2 = 2;
	Global_40088[67 /*46*/].f_3[0] = 4;
	Global_40088[67 /*46*/].f_3[1] = 0;
	Global_40088[67 /*46*/].f_30 = 1;
	Global_40088[67 /*46*/].f_8[0] = 7;
	Global_40088[68 /*46*/].f_45 = 0;
	Global_40088[68 /*46*/].f_31 = 0;
	Global_40088[68 /*46*/].f_42 = 0;
	Global_40088[68 /*46*/].f_43 = 0;
	Global_40088[68 /*46*/].f_2 = 2;
	Global_40088[68 /*46*/].f_3[0] = 4;
	Global_40088[68 /*46*/].f_3[1] = 0;
	Global_40088[68 /*46*/].f_30 = 1;
	Global_40088[68 /*46*/].f_8[0] = 8;
	Global_40088[69 /*46*/].f_45 = 0;
	Global_40088[69 /*46*/].f_31 = 0;
	Global_40088[69 /*46*/].f_42 = 0;
	Global_40088[69 /*46*/].f_43 = 0;
	Global_40088[69 /*46*/].f_2 = 2;
	Global_40088[69 /*46*/].f_3[0] = 2;
	Global_40088[69 /*46*/].f_3[1] = 38;
	Global_40088[69 /*46*/].f_30 = 1;
	Global_40088[69 /*46*/].f_8[0] = 154;
	Global_40088[70 /*46*/].f_45 = 0;
	Global_40088[70 /*46*/].f_31 = 0;
	Global_40088[70 /*46*/].f_42 = 0;
	Global_40088[70 /*46*/].f_43 = 0;
	Global_40088[70 /*46*/].f_2 = 1;
	Global_40088[70 /*46*/].f_3[0] = 11;
	Global_40088[70 /*46*/].f_30 = 3;
	Global_40088[70 /*46*/].f_8[0] = 155;
	Global_40088[70 /*46*/].f_8[1] = 156;
	Global_40088[70 /*46*/].f_8[2] = 157;
	Global_40088[71 /*46*/].f_45 = 0;
	Global_40088[71 /*46*/].f_31 = 0;
	Global_40088[71 /*46*/].f_42 = 0;
	Global_40088[71 /*46*/].f_43 = 0;
	Global_40088[71 /*46*/].f_2 = 2;
	Global_40088[71 /*46*/].f_3[0] = 2;
	Global_40088[71 /*46*/].f_3[1] = 29;
	Global_40088[71 /*46*/].f_30 = 1;
	Global_40088[71 /*46*/].f_8[0] = 158;
	Global_40088[72 /*46*/].f_45 = 0;
	Global_40088[72 /*46*/].f_31 = 0;
	Global_40088[72 /*46*/].f_42 = 0;
	Global_40088[72 /*46*/].f_43 = 0;
	Global_40088[72 /*46*/].f_2 = 1;
	Global_40088[72 /*46*/].f_3[0] = 0;
	Global_40088[72 /*46*/].f_30 = 1;
	Global_40088[72 /*46*/].f_8[0] = 159;
	Global_40088[73 /*46*/].f_45 = 0;
	Global_40088[73 /*46*/].f_31 = 0;
	Global_40088[73 /*46*/].f_42 = 0;
	Global_40088[73 /*46*/].f_43 = 0;
	Global_40088[73 /*46*/].f_2 = 1;
	Global_40088[73 /*46*/].f_3[0] = 1;
	Global_40088[73 /*46*/].f_30 = 1;
	Global_40088[73 /*46*/].f_8[0] = 160;
	Global_40088[74 /*46*/].f_45 = 0;
	Global_40088[74 /*46*/].f_31 = 0;
	Global_40088[74 /*46*/].f_42 = 0;
	Global_40088[74 /*46*/].f_43 = 0;
	Global_40088[74 /*46*/].f_2 = 1;
	Global_40088[74 /*46*/].f_3[0] = 1;
	Global_40088[74 /*46*/].f_30 = 1;
	Global_40088[74 /*46*/].f_8[0] = 161;
	Global_40088[75 /*46*/].f_45 = 0;
	Global_40088[75 /*46*/].f_31 = 0;
	Global_40088[75 /*46*/].f_42 = 0;
	Global_40088[75 /*46*/].f_43 = 0;
	Global_40088[75 /*46*/].f_2 = 1;
	Global_40088[75 /*46*/].f_3[0] = 0;
	Global_40088[75 /*46*/].f_30 = 1;
	Global_40088[75 /*46*/].f_8[0] = 162;
	Global_40088[76 /*46*/].f_45 = 0;
	Global_40088[76 /*46*/].f_31 = 0;
	Global_40088[76 /*46*/].f_42 = 0;
	Global_40088[76 /*46*/].f_43 = 0;
	Global_40088[76 /*46*/].f_2 = 1;
	Global_40088[76 /*46*/].f_3[0] = 2;
	Global_40088[76 /*46*/].f_30 = 1;
	Global_40088[76 /*46*/].f_8[0] = 163;
	Global_40088[77 /*46*/].f_45 = 0;
	Global_40088[77 /*46*/].f_31 = 0;
	Global_40088[77 /*46*/].f_42 = 0;
	Global_40088[77 /*46*/].f_43 = 0;
	Global_40088[77 /*46*/].f_2 = 1;
	Global_40088[77 /*46*/].f_3[0] = 1;
	Global_40088[77 /*46*/].f_30 = 1;
	Global_40088[77 /*46*/].f_8[0] = 164;
	Global_40088[78 /*46*/].f_45 = 0;
	Global_40088[78 /*46*/].f_31 = 0;
	Global_40088[78 /*46*/].f_42 = 0;
	Global_40088[78 /*46*/].f_43 = 0;
	Global_40088[78 /*46*/].f_2 = 1;
	Global_40088[78 /*46*/].f_3[0] = 1;
	Global_40088[78 /*46*/].f_30 = 1;
	Global_40088[78 /*46*/].f_8[0] = 165;
	Global_40088[79 /*46*/].f_45 = 0;
	Global_40088[79 /*46*/].f_31 = 0;
	Global_40088[79 /*46*/].f_42 = 0;
	Global_40088[79 /*46*/].f_43 = 0;
	Global_40088[79 /*46*/].f_2 = 1;
	Global_40088[79 /*46*/].f_3[0] = 0;
	Global_40088[79 /*46*/].f_30 = 1;
	Global_40088[79 /*46*/].f_8[0] = 166;
	Global_40088[80 /*46*/].f_45 = 0;
	Global_40088[80 /*46*/].f_31 = 0;
	Global_40088[80 /*46*/].f_42 = 0;
	Global_40088[80 /*46*/].f_43 = 0;
	Global_40088[80 /*46*/].f_2 = 1;
	Global_40088[80 /*46*/].f_3[0] = 0;
	Global_40088[80 /*46*/].f_30 = 1;
	Global_40088[80 /*46*/].f_8[0] = 167;
	Global_40088[81 /*46*/].f_45 = 0;
	Global_40088[81 /*46*/].f_31 = 0;
	Global_40088[81 /*46*/].f_42 = 0;
	Global_40088[81 /*46*/].f_43 = 0;
	Global_40088[81 /*46*/].f_2 = 1;
	Global_40088[81 /*46*/].f_3[0] = 0;
	Global_40088[81 /*46*/].f_30 = 1;
	Global_40088[81 /*46*/].f_8[0] = 168;
	Global_40088[82 /*46*/].f_45 = 0;
	Global_40088[82 /*46*/].f_31 = 0;
	Global_40088[82 /*46*/].f_42 = 0;
	Global_40088[82 /*46*/].f_43 = 0;
	Global_40088[82 /*46*/].f_2 = 1;
	Global_40088[82 /*46*/].f_3[0] = 2;
	Global_40088[82 /*46*/].f_30 = 1;
	Global_40088[82 /*46*/].f_8[0] = 169;
	Global_40088[83 /*46*/].f_45 = 0;
	Global_40088[83 /*46*/].f_31 = 0;
	Global_40088[83 /*46*/].f_42 = 0;
	Global_40088[83 /*46*/].f_43 = 0;
	Global_40088[83 /*46*/].f_2 = 1;
	Global_40088[83 /*46*/].f_3[0] = 1;
	Global_40088[83 /*46*/].f_30 = 1;
	Global_40088[83 /*46*/].f_8[0] = 170;
	Global_40088[84 /*46*/].f_45 = 0;
	Global_40088[84 /*46*/].f_31 = 0;
	Global_40088[84 /*46*/].f_42 = 0;
	Global_40088[84 /*46*/].f_43 = 0;
	Global_40088[84 /*46*/].f_2 = 1;
	Global_40088[84 /*46*/].f_3[0] = 1;
	Global_40088[84 /*46*/].f_30 = 1;
	Global_40088[84 /*46*/].f_8[0] = 171;
	Global_40088[85 /*46*/].f_45 = 0;
	Global_40088[85 /*46*/].f_31 = 0;
	Global_40088[85 /*46*/].f_42 = 0;
	Global_40088[85 /*46*/].f_43 = 0;
	Global_40088[85 /*46*/].f_2 = 1;
	Global_40088[85 /*46*/].f_3[0] = 0;
	Global_40088[85 /*46*/].f_30 = 1;
	Global_40088[85 /*46*/].f_8[0] = 172;
	Global_40088[86 /*46*/].f_45 = 0;
	Global_40088[86 /*46*/].f_31 = 0;
	Global_40088[86 /*46*/].f_42 = 0;
	Global_40088[86 /*46*/].f_43 = 0;
	Global_40088[86 /*46*/].f_2 = 1;
	Global_40088[86 /*46*/].f_3[0] = 2;
	Global_40088[86 /*46*/].f_30 = 1;
	Global_40088[86 /*46*/].f_8[0] = 173;
	Global_40088[87 /*46*/].f_45 = 0;
	Global_40088[87 /*46*/].f_31 = 0;
	Global_40088[87 /*46*/].f_42 = 0;
	Global_40088[87 /*46*/].f_43 = 0;
	Global_40088[87 /*46*/].f_2 = 1;
	Global_40088[87 /*46*/].f_3[0] = 1;
	Global_40088[87 /*46*/].f_30 = 1;
	Global_40088[87 /*46*/].f_8[0] = 174;
	Global_40088[88 /*46*/].f_45 = 0;
	Global_40088[88 /*46*/].f_31 = 0;
	Global_40088[88 /*46*/].f_42 = 0;
	Global_40088[88 /*46*/].f_43 = 0;
	Global_40088[88 /*46*/].f_2 = 1;
	Global_40088[88 /*46*/].f_3[0] = 0;
	Global_40088[88 /*46*/].f_30 = 1;
	Global_40088[88 /*46*/].f_8[0] = 175;
	Global_40088[89 /*46*/].f_45 = 0;
	Global_40088[89 /*46*/].f_31 = 0;
	Global_40088[89 /*46*/].f_42 = 0;
	Global_40088[89 /*46*/].f_43 = 0;
	Global_40088[89 /*46*/].f_2 = 1;
	Global_40088[89 /*46*/].f_3[0] = 2;
	Global_40088[89 /*46*/].f_30 = 1;
	Global_40088[89 /*46*/].f_8[0] = 176;
	Global_40088[90 /*46*/].f_45 = 0;
	Global_40088[90 /*46*/].f_31 = 0;
	Global_40088[90 /*46*/].f_42 = 0;
	Global_40088[90 /*46*/].f_43 = 0;
	Global_40088[90 /*46*/].f_2 = 1;
	Global_40088[90 /*46*/].f_3[0] = 1;
	Global_40088[90 /*46*/].f_30 = 1;
	Global_40088[90 /*46*/].f_8[0] = 177;
	Global_40088[91 /*46*/].f_45 = 0;
	Global_40088[91 /*46*/].f_31 = 0;
	Global_40088[91 /*46*/].f_42 = 0;
	Global_40088[91 /*46*/].f_43 = 0;
	Global_40088[91 /*46*/].f_2 = 1;
	Global_40088[91 /*46*/].f_3[0] = 0;
	Global_40088[91 /*46*/].f_30 = 1;
	Global_40088[91 /*46*/].f_8[0] = 179;
	Global_40088[92 /*46*/].f_45 = 0;
	Global_40088[92 /*46*/].f_31 = 0;
	Global_40088[92 /*46*/].f_42 = 0;
	Global_40088[92 /*46*/].f_43 = 0;
	Global_40088[92 /*46*/].f_2 = 1;
	Global_40088[92 /*46*/].f_3[0] = 2;
	Global_40088[92 /*46*/].f_30 = 1;
	Global_40088[92 /*46*/].f_8[0] = 178;
	Global_40088[93 /*46*/].f_45 = 0;
	Global_40088[93 /*46*/].f_31 = 0;
	Global_40088[93 /*46*/].f_42 = 0;
	Global_40088[93 /*46*/].f_43 = 0;
	Global_40088[93 /*46*/].f_2 = 1;
	Global_40088[93 /*46*/].f_3[0] = 1;
	Global_40088[93 /*46*/].f_30 = 1;
	Global_40088[93 /*46*/].f_8[0] = 180;
	Global_40088[94 /*46*/].f_45 = 0;
	Global_40088[94 /*46*/].f_31 = 0;
	Global_40088[94 /*46*/].f_42 = 0;
	Global_40088[94 /*46*/].f_43 = 0;
	Global_40088[94 /*46*/].f_2 = 2;
	Global_40088[94 /*46*/].f_3[0] = 4;
	Global_40088[94 /*46*/].f_3[1] = 0;
	Global_40088[94 /*46*/].f_30 = 1;
	Global_40088[94 /*46*/].f_8[0] = 181;
	Global_40088[95 /*46*/].f_45 = 0;
	Global_40088[95 /*46*/].f_31 = 0;
	Global_40088[95 /*46*/].f_42 = 0;
	Global_40088[95 /*46*/].f_43 = 0;
	Global_40088[95 /*46*/].f_2 = 1;
	Global_40088[95 /*46*/].f_3[0] = 37;
	Global_40088[95 /*46*/].f_30 = 1;
	Global_40088[95 /*46*/].f_8[0] = 182;
	Global_40088[96 /*46*/].f_45 = 0;
	Global_40088[96 /*46*/].f_31 = 0;
	Global_40088[96 /*46*/].f_42 = 0;
	Global_40088[96 /*46*/].f_43 = 0;
	Global_40088[96 /*46*/].f_2 = 1;
	Global_40088[96 /*46*/].f_3[0] = 37;
	Global_40088[96 /*46*/].f_30 = 1;
	Global_40088[96 /*46*/].f_8[0] = 183;
	Global_40088[97 /*46*/].f_45 = 0;
	Global_40088[97 /*46*/].f_31 = 0;
	Global_40088[97 /*46*/].f_42 = 0;
	Global_40088[97 /*46*/].f_43 = 0;
	Global_40088[97 /*46*/].f_2 = 1;
	Global_40088[97 /*46*/].f_3[0] = 37;
	Global_40088[97 /*46*/].f_30 = 1;
	Global_40088[97 /*46*/].f_8[0] = 184;
	Global_40088[98 /*46*/].f_45 = 0;
	Global_40088[98 /*46*/].f_31 = 0;
	Global_40088[98 /*46*/].f_42 = 0;
	Global_40088[98 /*46*/].f_43 = 0;
	Global_40088[98 /*46*/].f_2 = 1;
	Global_40088[98 /*46*/].f_3[0] = 54;
	Global_40088[98 /*46*/].f_30 = 3;
	Global_40088[98 /*46*/].f_8[0] = 185;
	Global_40088[98 /*46*/].f_8[1] = 186;
	Global_40088[98 /*46*/].f_8[2] = 188;
	Global_40088[99 /*46*/].f_45 = 0;
	Global_40088[99 /*46*/].f_31 = 0;
	Global_40088[99 /*46*/].f_42 = 0;
	Global_40088[99 /*46*/].f_43 = 0;
	Global_40088[99 /*46*/].f_2 = 1;
	Global_40088[99 /*46*/].f_3[0] = 55;
	Global_40088[99 /*46*/].f_30 = 3;
	Global_40088[99 /*46*/].f_8[0] = 187;
	Global_40088[99 /*46*/].f_8[1] = 189;
	Global_40088[99 /*46*/].f_8[2] = 190;
	Global_40088[100 /*46*/].f_45 = 0;
	Global_40088[100 /*46*/].f_31 = 0;
	Global_40088[100 /*46*/].f_42 = 0;
	Global_40088[100 /*46*/].f_43 = 0;
	Global_40088[100 /*46*/].f_2 = 3;
	Global_40088[100 /*46*/].f_3[0] = 56;
	Global_40088[100 /*46*/].f_3[1] = 0;
	Global_40088[100 /*46*/].f_3[2] = 2;
	Global_40088[100 /*46*/].f_30 = 5;
	Global_40088[100 /*46*/].f_8[0] = 194;
	Global_40088[100 /*46*/].f_8[1] = 195;
	Global_40088[100 /*46*/].f_8[2] = 196;
	Global_40088[100 /*46*/].f_8[3] = 197;
	Global_40088[100 /*46*/].f_8[4] = 198;
	Global_40088[101 /*46*/].f_45 = 0;
	Global_40088[101 /*46*/].f_31 = 0;
	Global_40088[101 /*46*/].f_42 = 0;
	Global_40088[101 /*46*/].f_43 = 0;
	Global_40088[101 /*46*/].f_2 = 2;
	Global_40088[101 /*46*/].f_3[0] = 57;
	Global_40088[101 /*46*/].f_3[1] = 0;
	Global_40088[101 /*46*/].f_30 = 8;
	Global_40088[101 /*46*/].f_8[0] = 199;
	Global_40088[101 /*46*/].f_8[1] = 200;
	Global_40088[101 /*46*/].f_8[2] = 201;
	Global_40088[101 /*46*/].f_8[3] = 202;
	Global_40088[101 /*46*/].f_8[4] = 203;
	Global_40088[101 /*46*/].f_8[5] = 204;
	Global_40088[101 /*46*/].f_8[6] = 205;
	Global_40088[101 /*46*/].f_8[7] = 206;
	Global_40088[102 /*46*/].f_45 = 0;
	Global_40088[102 /*46*/].f_31 = 0;
	Global_40088[102 /*46*/].f_42 = 0;
	Global_40088[102 /*46*/].f_43 = 0;
	Global_40088[102 /*46*/].f_2 = 2;
	Global_40088[102 /*46*/].f_3[0] = 58;
	Global_40088[102 /*46*/].f_3[1] = 0;
	Global_40088[102 /*46*/].f_30 = 7;
	Global_40088[102 /*46*/].f_8[0] = 207;
	Global_40088[102 /*46*/].f_8[1] = 208;
	Global_40088[102 /*46*/].f_8[2] = 209;
	Global_40088[102 /*46*/].f_8[3] = 210;
	Global_40088[102 /*46*/].f_8[4] = 211;
	Global_40088[102 /*46*/].f_8[5] = 212;
	Global_40088[102 /*46*/].f_8[6] = 213;
	Global_40088[103 /*46*/].f_45 = 0;
	Global_40088[103 /*46*/].f_31 = 0;
	Global_40088[103 /*46*/].f_42 = 0;
	Global_40088[103 /*46*/].f_43 = 0;
	Global_40088[103 /*46*/].f_2 = 2;
	Global_40088[103 /*46*/].f_3[0] = 59;
	Global_40088[103 /*46*/].f_3[1] = 0;
	Global_40088[103 /*46*/].f_30 = 8;
	Global_40088[103 /*46*/].f_8[0] = 214;
	Global_40088[103 /*46*/].f_8[1] = 215;
	Global_40088[103 /*46*/].f_8[2] = 216;
	Global_40088[103 /*46*/].f_8[3] = 217;
	Global_40088[103 /*46*/].f_8[4] = 218;
	Global_40088[103 /*46*/].f_8[5] = 219;
	Global_40088[103 /*46*/].f_8[6] = 220;
	Global_40088[103 /*46*/].f_8[7] = 221;
	Global_40088[104 /*46*/].f_45 = 0;
	Global_40088[104 /*46*/].f_31 = 0;
	Global_40088[104 /*46*/].f_42 = 0;
	Global_40088[104 /*46*/].f_43 = 0;
	Global_40088[104 /*46*/].f_2 = 2;
	Global_40088[104 /*46*/].f_3[0] = 60;
	Global_40088[104 /*46*/].f_3[1] = 2;
	Global_40088[104 /*46*/].f_30 = 7;
	Global_40088[104 /*46*/].f_8[0] = 222;
	Global_40088[104 /*46*/].f_8[1] = 223;
	Global_40088[104 /*46*/].f_8[2] = 224;
	Global_40088[104 /*46*/].f_8[3] = 225;
	Global_40088[104 /*46*/].f_8[4] = 226;
	Global_40088[104 /*46*/].f_8[5] = 227;
	Global_40088[104 /*46*/].f_8[6] = 228;
	Global_40088[105 /*46*/].f_45 = 0;
	Global_40088[105 /*46*/].f_31 = 0;
	Global_40088[105 /*46*/].f_42 = 0;
	Global_40088[105 /*46*/].f_43 = 0;
	Global_40088[105 /*46*/].f_2 = 2;
	Global_40088[105 /*46*/].f_3[0] = 61;
	Global_40088[105 /*46*/].f_3[1] = 2;
	Global_40088[105 /*46*/].f_30 = 6;
	Global_40088[105 /*46*/].f_8[0] = 229;
	Global_40088[105 /*46*/].f_8[1] = 230;
	Global_40088[105 /*46*/].f_8[2] = 231;
	Global_40088[105 /*46*/].f_8[3] = 232;
	Global_40088[105 /*46*/].f_8[4] = 233;
	Global_40088[105 /*46*/].f_8[5] = 234;
	Global_40088[106 /*46*/].f_45 = 0;
	Global_40088[106 /*46*/].f_31 = 0;
	Global_40088[106 /*46*/].f_42 = 0;
	Global_40088[106 /*46*/].f_43 = 0;
	Global_40088[106 /*46*/].f_2 = 2;
	Global_40088[106 /*46*/].f_3[0] = 62;
	Global_40088[106 /*46*/].f_3[1] = 2;
	Global_40088[106 /*46*/].f_30 = 6;
	Global_40088[106 /*46*/].f_8[0] = 235;
	Global_40088[106 /*46*/].f_8[1] = 236;
	Global_40088[106 /*46*/].f_8[2] = 237;
	Global_40088[106 /*46*/].f_8[3] = 238;
	Global_40088[106 /*46*/].f_8[4] = 239;
	Global_40088[106 /*46*/].f_8[5] = 240;
	Global_40088[107 /*46*/].f_45 = 0;
	Global_40088[107 /*46*/].f_31 = 0;
	Global_40088[107 /*46*/].f_42 = 0;
	Global_40088[107 /*46*/].f_43 = 0;
	Global_40088[107 /*46*/].f_2 = 1;
	Global_40088[107 /*46*/].f_3[0] = 36;
	Global_40088[107 /*46*/].f_30 = 1;
	Global_40088[107 /*46*/].f_8[0] = 241;
	Global_40088[108 /*46*/].f_45 = 0;
	Global_40088[108 /*46*/].f_31 = 0;
	Global_40088[108 /*46*/].f_42 = 0;
	Global_40088[108 /*46*/].f_43 = 0;
	Global_40088[108 /*46*/].f_2 = 1;
	Global_40088[108 /*46*/].f_3[0] = 36;
	Global_40088[108 /*46*/].f_30 = 1;
	Global_40088[108 /*46*/].f_8[0] = 242;
	Global_40088[109 /*46*/].f_45 = 0;
	Global_40088[109 /*46*/].f_31 = 0;
	Global_40088[109 /*46*/].f_42 = 0;
	Global_40088[109 /*46*/].f_43 = 0;
	Global_40088[109 /*46*/].f_2 = 1;
	Global_40088[109 /*46*/].f_3[0] = 36;
	Global_40088[109 /*46*/].f_30 = 1;
	Global_40088[109 /*46*/].f_8[0] = 243;
	Global_40088[110 /*46*/].f_45 = 0;
	Global_40088[110 /*46*/].f_31 = 0;
	Global_40088[110 /*46*/].f_42 = 0;
	Global_40088[110 /*46*/].f_43 = 0;
	Global_40088[110 /*46*/].f_2 = 1;
	Global_40088[110 /*46*/].f_3[0] = 65;
	Global_40088[110 /*46*/].f_30 = 1;
	Global_40088[110 /*46*/].f_8[0] = 244;
	Global_40088[111 /*46*/].f_45 = 0;
	Global_40088[111 /*46*/].f_31 = 0;
	Global_40088[111 /*46*/].f_42 = 0;
	Global_40088[111 /*46*/].f_43 = 0;
	Global_40088[111 /*46*/].f_2 = 1;
	Global_40088[111 /*46*/].f_3[0] = 65;
	Global_40088[111 /*46*/].f_30 = 1;
	Global_40088[111 /*46*/].f_8[0] = 245;
	Global_40088[112 /*46*/].f_45 = 0;
	Global_40088[112 /*46*/].f_31 = 0;
	Global_40088[112 /*46*/].f_42 = 0;
	Global_40088[112 /*46*/].f_43 = 0;
	Global_40088[112 /*46*/].f_2 = 1;
	Global_40088[112 /*46*/].f_3[0] = 65;
	Global_40088[112 /*46*/].f_30 = 1;
	Global_40088[112 /*46*/].f_8[0] = 246;
	Global_40088[113 /*46*/].f_45 = 0;
	Global_40088[113 /*46*/].f_31 = 0;
	Global_40088[113 /*46*/].f_42 = 0;
	Global_40088[113 /*46*/].f_43 = 0;
	Global_40088[113 /*46*/].f_2 = 1;
	Global_40088[113 /*46*/].f_3[0] = 65;
	Global_40088[113 /*46*/].f_30 = 1;
	Global_40088[113 /*46*/].f_8[0] = 247;
	Global_40088[114 /*46*/].f_45 = 0;
	Global_40088[114 /*46*/].f_31 = 0;
	Global_40088[114 /*46*/].f_42 = 0;
	Global_40088[114 /*46*/].f_43 = 0;
	Global_40088[114 /*46*/].f_2 = 2;
	Global_40088[114 /*46*/].f_3[0] = 19;
	Global_40088[114 /*46*/].f_3[1] = 1;
	Global_40088[114 /*46*/].f_30 = 21;
	Global_40088[114 /*46*/].f_8[0] = 249;
	Global_40088[114 /*46*/].f_8[1] = 250;
	Global_40088[114 /*46*/].f_8[2] = 251;
	Global_40088[114 /*46*/].f_8[3] = 252;
	Global_40088[114 /*46*/].f_8[4] = 253;
	Global_40088[114 /*46*/].f_8[5] = 254;
	Global_40088[114 /*46*/].f_8[6] = 255;
	Global_40088[114 /*46*/].f_8[7] = 256;
	Global_40088[114 /*46*/].f_8[8] = 257;
	Global_40088[114 /*46*/].f_8[9] = 258;
	Global_40088[114 /*46*/].f_8[10] = 259;
	Global_40088[114 /*46*/].f_8[11] = 260;
	Global_40088[114 /*46*/].f_8[12] = 261;
	Global_40088[114 /*46*/].f_8[13] = 262;
	Global_40088[114 /*46*/].f_8[14] = 263;
	Global_40088[114 /*46*/].f_8[15] = 264;
	Global_40088[114 /*46*/].f_8[16] = 265;
	Global_40088[114 /*46*/].f_8[17] = 266;
	Global_40088[114 /*46*/].f_8[18] = 267;
	Global_40088[114 /*46*/].f_8[19] = 268;
	Global_40088[114 /*46*/].f_8[20] = 269;
	Global_40088[115 /*46*/].f_45 = 0;
	Global_40088[115 /*46*/].f_31 = 0;
	Global_40088[115 /*46*/].f_42 = 0;
	Global_40088[115 /*46*/].f_43 = 0;
	Global_40088[115 /*46*/].f_2 = 4;
	Global_40088[115 /*46*/].f_3[0] = 0;
	Global_40088[115 /*46*/].f_3[1] = 1;
	Global_40088[115 /*46*/].f_3[2] = 2;
	Global_40088[115 /*46*/].f_3[3] = 16;
	Global_40088[115 /*46*/].f_30 = 1;
	Global_40088[115 /*46*/].f_8[0] = 270;
	Global_40088[116 /*46*/].f_45 = 0;
	Global_40088[116 /*46*/].f_31 = 0;
	Global_40088[116 /*46*/].f_42 = 0;
	Global_40088[116 /*46*/].f_43 = 0;
	Global_40088[116 /*46*/].f_2 = 4;
	Global_40088[116 /*46*/].f_3[0] = 0;
	Global_40088[116 /*46*/].f_3[1] = 1;
	Global_40088[116 /*46*/].f_3[2] = 2;
	Global_40088[116 /*46*/].f_3[3] = 16;
	Global_40088[116 /*46*/].f_30 = 1;
	Global_40088[116 /*46*/].f_8[0] = 271;
	Global_40088[117 /*46*/].f_45 = 0;
	Global_40088[117 /*46*/].f_31 = 0;
	Global_40088[117 /*46*/].f_42 = 0;
	Global_40088[117 /*46*/].f_43 = 0;
	Global_40088[117 /*46*/].f_2 = 4;
	Global_40088[117 /*46*/].f_3[0] = 0;
	Global_40088[117 /*46*/].f_3[1] = 1;
	Global_40088[117 /*46*/].f_3[2] = 2;
	Global_40088[117 /*46*/].f_3[3] = 16;
	Global_40088[117 /*46*/].f_30 = 1;
	Global_40088[117 /*46*/].f_8[0] = 272;
	Global_40088[118 /*46*/].f_45 = 0;
	Global_40088[118 /*46*/].f_31 = 0;
	Global_40088[118 /*46*/].f_42 = 0;
	Global_40088[118 /*46*/].f_43 = 0;
	Global_40088[118 /*46*/].f_2 = 4;
	Global_40088[118 /*46*/].f_3[0] = 0;
	Global_40088[118 /*46*/].f_3[1] = 1;
	Global_40088[118 /*46*/].f_3[2] = 2;
	Global_40088[118 /*46*/].f_3[3] = 16;
	Global_40088[118 /*46*/].f_30 = 1;
	Global_40088[118 /*46*/].f_8[0] = 273;
	Global_40088[119 /*46*/].f_45 = 0;
	Global_40088[119 /*46*/].f_31 = 0;
	Global_40088[119 /*46*/].f_42 = 0;
	Global_40088[119 /*46*/].f_43 = 0;
	Global_40088[119 /*46*/].f_2 = 4;
	Global_40088[119 /*46*/].f_3[0] = 0;
	Global_40088[119 /*46*/].f_3[1] = 1;
	Global_40088[119 /*46*/].f_3[2] = 2;
	Global_40088[119 /*46*/].f_3[3] = 16;
	Global_40088[119 /*46*/].f_30 = 1;
	Global_40088[119 /*46*/].f_8[0] = 274;
	Global_40088[120 /*46*/].f_45 = 0;
	Global_40088[120 /*46*/].f_31 = 0;
	Global_40088[120 /*46*/].f_42 = 0;
	Global_40088[120 /*46*/].f_43 = 0;
	Global_40088[120 /*46*/].f_2 = 4;
	Global_40088[120 /*46*/].f_3[0] = 0;
	Global_40088[120 /*46*/].f_3[1] = 1;
	Global_40088[120 /*46*/].f_3[2] = 2;
	Global_40088[120 /*46*/].f_3[3] = 16;
	Global_40088[120 /*46*/].f_30 = 1;
	Global_40088[120 /*46*/].f_8[0] = 275;
	Global_40088[121 /*46*/].f_45 = 0;
	Global_40088[121 /*46*/].f_31 = 0;
	Global_40088[121 /*46*/].f_42 = 0;
	Global_40088[121 /*46*/].f_43 = 0;
	Global_40088[121 /*46*/].f_2 = 4;
	Global_40088[121 /*46*/].f_3[0] = 0;
	Global_40088[121 /*46*/].f_3[1] = 1;
	Global_40088[121 /*46*/].f_3[2] = 2;
	Global_40088[121 /*46*/].f_3[3] = 16;
	Global_40088[121 /*46*/].f_30 = 1;
	Global_40088[121 /*46*/].f_8[0] = 276;
}

void func_67()
{
	unk_0x2F798BA2098FDADE();
}

