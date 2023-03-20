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
	iLocal_17 = -1;
	iVar0 = -1;
	bVar1 = false;
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_4();
	}
	while (true)
	{
		if (!bVar1)
		{
			switch (func_1(unk_0xE7869D5D7816A9B6()))
			{
				case 1:
					if (unk_0x4549BDC1D3847C6E("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						unk_0xD53B810D15468A29();
						bVar1 = true;
					}
					break;
				
				case 2:
					if (unk_0x4549BDC1D3847C6E("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						unk_0xD53B810D15468A29();
						bVar1 = true;
					}
					break;
				
				default:
					if (unk_0x4549BDC1D3847C6E("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						unk_0xD53B810D15468A29();
						bVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = unk_0x9D40BBF80D8F5E8A();
		}
		else if (unk_0x9D40BBF80D8F5E8A() > iVar0 + 8000)
		{
			func_4();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(uParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
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
	unk_0xD79A44DA48F5BB1E();
	unk_0x52F20802944F8DCE();
}

