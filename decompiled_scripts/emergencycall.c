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
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	if (unk_0xC968670BFACE42D9(11))
	{
		iLocal_42 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			switch (iLocal_42)
			{
				case 0:
					func_5();
					break;
				
				case 1:
					break;
				
				case 2:
					func_4();
					if (unk_0x10FAB35428CCC9D7())
					{
						if (unk_0x05983472F0494E60(7, unk_0xD80958FC74E988A6(), 2, 3f, &iLocal_48))
						{
							iLocal_47 = unk_0x9CD27B0045628463();
							iLocal_42 = 5;
						}
					}
					else if (unk_0x3F892CAF67444AE7(7, Local_44, 2, 3f, &iLocal_48))
					{
						iLocal_47 = unk_0x9CD27B0045628463();
						iLocal_42 = 5;
					}
					break;
				
				case 3:
					func_4();
					if (unk_0x10FAB35428CCC9D7())
					{
						if (unk_0x05983472F0494E60(5, unk_0xD80958FC74E988A6(), 2, 3f, &iLocal_48))
						{
							iLocal_47 = unk_0x9CD27B0045628463();
							iLocal_42 = 5;
						}
					}
					else if (unk_0x3F892CAF67444AE7(5, Local_44, 2, 3f, &iLocal_48))
					{
						iLocal_47 = unk_0x9CD27B0045628463();
						iLocal_42 = 5;
					}
					break;
				
				case 4:
					func_4();
					if (unk_0x10FAB35428CCC9D7())
					{
						if (unk_0x05983472F0494E60(3, unk_0xD80958FC74E988A6(), 4, 3f, &iLocal_48))
						{
							iLocal_47 = unk_0x9CD27B0045628463();
							iLocal_42 = 5;
						}
					}
					else if (unk_0x3F892CAF67444AE7(3, Local_44, 4, 3f, &iLocal_48))
					{
						if (Global_86686.f_358 == unk_0xD24D37CC275948CC("AGENCY_PREP_1") || (unk_0x2C83A9DA6BFFC4F9(unk_0xD24D37CC275948CC("agency_prep1")) > 0 && func_3(0)))
						{
							Global_86686.f_358 = unk_0xD24D37CC275948CC("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_86616 = 1;
						}
						iLocal_47 = unk_0x9CD27B0045628463();
						iLocal_42 = 5;
					}
					break;
				
				case 5:
					if (unk_0x9CD27B0045628463() > (iLocal_47 + 60000) || !unk_0xC8BC6461E629BEAA(iLocal_48))
					{
						func_1();
					}
					else if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
						{
							if (unk_0xC8BC6461E629BEAA(iLocal_48))
							{
								unk_0x556C1AA270D5A207(iLocal_48);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_42 = 0;
	iLocal_43 = 0;
	unk_0x1090044AD1DA76FA();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_4()
{
	if (unk_0x9CD27B0045628463() > iLocal_47 + 30000)
	{
		iLocal_42 = 5;
	}
}

void func_5()
{
	var uVar0;
	
	switch (iLocal_43)
	{
		case 0:
			iLocal_43 = 1;
			iLocal_47 = unk_0x9CD27B0045628463();
			break;
		
		case 1:
			while (!func_13())
			{
				unk_0x4EDE34FBADD967A6(0);
				if (func_12() == 3)
				{
					iLocal_42 = 3;
				}
				if (func_12() == 4)
				{
					iLocal_42 = 4;
				}
				if (func_12() == 5)
				{
					iLocal_42 = 2;
				}
				if (unk_0x9CD27B0045628463() > iLocal_47 + 30000)
				{
					iLocal_47 = unk_0x9CD27B0045628463();
					func_8(0);
				}
			}
			if (iLocal_42 == 0)
			{
				iLocal_42 = 5;
			}
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				func_6(unk_0xD80958FC74E988A6(), &Local_44, &uVar0);
			}
			iLocal_47 = unk_0x9CD27B0045628463();
			break;
	}
}

void func_6(int iParam0, var* uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	struct<3> Var25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				unk_0x80CA6A8B6C094CC4(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), iVar0, uParam1, &fVar16, &iVar1, 5, 3f, 0f);
				unk_0x132F52BBA570FE92(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, false);
				if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(iParam0, true) };
				fVar14 = unk_0x2FFB6B224F4B2926(Var10.f_0, Var10.f_1);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_7(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (unk_0x4F5070AA58F69279(unk_0x22D7275A79FE8215(*uParam1, 1, 1, 3f, 0f)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * unk_0xBBDA792448DB5A89((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 294f, -895f, 28f, true) < 25f || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0x163E252DE035A133(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0x2A488C176D52CCA5(unk_0x163E252DE035A133(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0x163E252DE035A133(*uParam1, *uParam2, fVar17, 0f, 0f) };
				iVar20 = unk_0x28579D1B8F8AAC80(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x3D87450E15D98694(iVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (Var25.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_7(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_8(int iParam0)
{
	if (Global_14551)
	{
		func_10(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_9())
	{
		Global_14393.f_1 = 3;
	}
}

int func_9()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_11(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	return Global_16709;
}

int func_13()
{
	if (Global_15692 == 0)
	{
		return 1;
	}
	return 0;
}

