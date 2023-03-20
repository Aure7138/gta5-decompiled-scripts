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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
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
	uLocal_45 = unk_0xE30164C14FFD22B6();
	uLocal_46 = unk_0xE1ABDD92C442B1EE();
	if (unk_0x8D841F1DD3FA555F(18))
	{
		func_10();
	}
	while (!func_9(18))
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_10();
}

void func_1()
{
	switch (iLocal_47)
	{
		case 0:
			if (((!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0xCEECC2F87148C3A4()) && !func_8()) && !func_7())
			{
				unk_0xE0013E74AB6963DC("taxiService");
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (unk_0x06D4A1BE3DF77306("taxiService"))
			{
				unk_0xE81651AD79516E48("taxiService", 1828);
				unk_0xD25F9F5A80824C77("taxiService");
				iLocal_47 = 2;
			}
			break;
		
		case 2:
			switch (func_5("AM_H_TAXI1"))
			{
				case 2:
					func_2("AM_H_TAXI1", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_47 = 3;
					break;
			}
			break;
		
		case 3:
			switch (func_5("AM_H_TAXI2"))
			{
				case 2:
					func_2("AM_H_TAXI2", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_47 = 4;
					break;
			}
			break;
		
		case 4:
			func_10();
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_3(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_3(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_4();
	}
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_5(char* sParam0)
{
	if (unk_0xD994929E13CC1ED5(sParam0, &Global_97576))
	{
		return 1;
	}
	if (func_6(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_6(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(sParam0, &(Global_98931.f_24859[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_7()
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

bool func_8()
{
	return Global_90848.f_1;
}

int func_9(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

void func_10()
{
	if (func_6("AM_H_TAXI1"))
	{
		func_11("AM_H_TAXI1", 1);
	}
	if (func_6("AM_H_TAXI2"))
	{
		func_11("AM_H_TAXI2", 1);
	}
	unk_0xC23A229F78DAD92A();
}

void func_11(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_97573 && iParam1)
	{
		if (func_14(sParam0) && !unk_0x4955845DEBFE61A5())
		{
			unk_0xB8BB626315D394F5(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(sParam0, &(Global_98931.f_24859[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_98931.f_24859.f_145 - 2))
			{
				func_13(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_12((Global_98931.f_24859.f_145 - 1));
			Global_98931.f_24859.f_145 = (Global_98931.f_24859.f_145 - 1);
			func_4();
			return;
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	StringCopy(&(Global_98931.f_24859[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_98931.f_24859[iParam0 /*16*/].f_4), "", 16);
	Global_98931.f_24859[iParam0 /*16*/].f_8 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_9 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_11 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_10 = -1;
	Global_98931.f_24859[iParam0 /*16*/].f_12 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_13 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_14 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_15 = 0;
}

void func_13(int iParam0, int iParam1)
{
	Global_98931.f_24859[iParam0 /*16*/] = { Global_98931.f_24859[iParam1 /*16*/] };
	Global_98931.f_24859[iParam0 /*16*/].f_4 = { Global_98931.f_24859[iParam1 /*16*/].f_4 };
	Global_98931.f_24859[iParam0 /*16*/].f_8 = Global_98931.f_24859[iParam1 /*16*/].f_8;
	Global_98931.f_24859[iParam0 /*16*/].f_10 = Global_98931.f_24859[iParam1 /*16*/].f_10;
	Global_98931.f_24859[iParam0 /*16*/].f_9 = Global_98931.f_24859[iParam1 /*16*/].f_9;
	Global_98931.f_24859[iParam0 /*16*/].f_11 = Global_98931.f_24859[iParam1 /*16*/].f_11;
	Global_98931.f_24859[iParam0 /*16*/].f_12 = Global_98931.f_24859[iParam1 /*16*/].f_12;
	Global_98931.f_24859[iParam0 /*16*/].f_13 = Global_98931.f_24859[iParam1 /*16*/].f_13;
	Global_98931.f_24859[iParam0 /*16*/].f_14 = Global_98931.f_24859[iParam1 /*16*/].f_14;
	Global_98931.f_24859[iParam0 /*16*/].f_15 = Global_98931.f_24859[iParam1 /*16*/].f_15;
}

var func_14(var uParam0)
{
	unk_0xF7F787102FC9BCAC(uParam0);
	return unk_0xEF468B98099969A5(0);
}

