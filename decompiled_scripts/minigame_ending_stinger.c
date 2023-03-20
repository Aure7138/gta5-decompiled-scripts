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
	if (unk_0x7547D7CF93115D6D(3))
	{
		func_4();
	}
	while (true)
	{
		if (!bVar1)
		{
			switch (func_1(unk_0x507DA4994C3D8EBD()))
			{
				case 1:
					if (unk_0xDBB45AE299F05694("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						unk_0xEC2AFF7D95998446();
						bVar1 = true;
					}
					break;
				
				case 2:
					if (unk_0xDBB45AE299F05694("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						unk_0xEC2AFF7D95998446();
						bVar1 = true;
					}
					break;
				
				default:
					if (unk_0xDBB45AE299F05694("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						unk_0xEC2AFF7D95998446();
						bVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = unk_0xF976C624234A4AA8();
		}
		else if (unk_0xF976C624234A4AA8() > iVar0 + 8000)
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
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(uParam0);
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
	unk_0x6B08A54AEE3B5574();
	unk_0x883793591E631A3B();
}

