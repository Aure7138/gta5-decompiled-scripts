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
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	
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
	iVar0 = -1;
	bVar1 = false;
	if (unk_0xC968670BFACE42D9(3))
	{
		func_4();
	}
	while (true)
	{
		if (!bVar1)
		{
			switch (func_1(unk_0xD80958FC74E988A6()))
			{
				case 1:
					if (unk_0x1F1F957154EC51DF("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						unk_0x58FCE43488F9F5F4();
						bVar1 = true;
					}
					break;
				
				case 2:
					if (unk_0x1F1F957154EC51DF("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						unk_0x58FCE43488F9F5F4();
						bVar1 = true;
					}
					break;
				
				default:
					if (unk_0x1F1F957154EC51DF("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						unk_0x58FCE43488F9F5F4();
						bVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = unk_0x9CD27B0045628463();
		}
		else if (unk_0x9CD27B0045628463() > iVar0 + 8000)
		{
			func_4();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_2(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

void func_4()
{
	unk_0xA4718A1419D18151();
	unk_0x1090044AD1DA76FA();
}

