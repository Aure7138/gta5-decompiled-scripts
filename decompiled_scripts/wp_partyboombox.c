#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xA96867DD0A63C62C(joaat("wp_partyboombox")) > 1)
	{
		unk_0x78C587487CD40B92();
	}
	if (unk_0x2EC83C7ACA23E8A4(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x43045253AC4C7FF5())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x7C42343912622BB6() >= 22 || unk_0x7C42343912622BB6() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x3FD21E1BA0B74B4A("ID2_21_G_Night"))
				{
					unk_0xB8289431295C363A("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x9726BE1252F8F0B6() && !unk_0xC740F8182E7E9681())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x3FD21E1BA0B74B4A("ID2_21_G_Night"))
	{
		unk_0x28F28FA21E7B496C("ID2_21_G_Night");
	}
	unk_0x78C587487CD40B92();
}

