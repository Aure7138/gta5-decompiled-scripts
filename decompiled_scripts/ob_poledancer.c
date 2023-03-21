#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0x765F6FEEFF39224F(uScriptParam_0))
	{
		unk_0xF70578F5CD9822CB(uScriptParam_0, 1);
		Local_2 = { unk_0x2CA911E7569D12EA(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xC472E34C8FBEC678(uScriptParam_0);
		unk_0x23298AB8A7D0F403(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x765F6FEEFF39224F(uScriptParam_0))
		{
			if (unk_0x68135A7434393CC1(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x23298AB8A7D0F403(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xBC2FC12AD0FBF72E(uLocal_1))
						{
							unk_0xE0345C3A81F4471A(uLocal_1, -1);
							unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
							unk_0x897EF720254BBEA3(uLocal_1, 1);
							unk_0x5894DC159447E10A();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0xD62C4419A41F106A(uLocal_1, 0))
	{
		if (!unk_0x3F219400E5FE4B69(uLocal_1))
		{
			unk_0x4B8B69DAE5BAC592(&uLocal_1);
		}
		else
		{
			unk_0x897EF720254BBEA3(uLocal_1, 1);
		}
	}
	unk_0x5894DC159447E10A();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xBC2FC12AD0FBF72E(uLocal_1))
		{
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x91BBD269506D61D2(uLocal_1, unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
			if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xBC2FC12AD0FBF72E(uLocal_1))
	{
		if (unk_0xD76D6BCC14B95CE1(uLocal_1, -2017877118) == 7)
		{
			unk_0x108754262311D34F(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x3C3357F21CC55C2C(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x108754262311D34F(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x1CE8F0A08E65CA6A(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x8E2EBAE8CA6648A5(uLocal_1, sLocal_8, sLocal_6, unk_0x9562E33C057F7589(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xD62C4419A41F106A(uLocal_1, 0))
	{
		uLocal_1 = unk_0x9BA5CF280376EEA4(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xC475906893AEB995(uLocal_1, 0);
		unk_0xF0BE7CB40DE62A2F(uLocal_1, 0);
		unk_0x4A852F02088ECC9D(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xB815670C37E03CDE(iLocal_7);
	unk_0x0483D0035D6E46FD(sLocal_8);
	if (unk_0x5D98D654CDC2165A(iLocal_7) && unk_0xE9CCF312047EBEE0(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xB815670C37E03CDE(iLocal_7);
		unk_0x0483D0035D6E46FD(sLocal_8);
	}
	return 0;
}

