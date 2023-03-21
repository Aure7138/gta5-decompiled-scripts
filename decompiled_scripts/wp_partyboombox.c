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
	if (unk_0xE7FAF8E78F7D3A73(joaat("wp_partyboombox")) > 1)
	{
		unk_0x810C5D6462DD69E6();
	}
	if (unk_0x76BF814AB8D4CAB8(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x6E65FD9B611945AD())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xF0B96EE16BA9FBE8() >= 22 || unk_0xF0B96EE16BA9FBE8() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x055A9BA923455525("ID2_21_G_Night"))
				{
					unk_0xB05715018CFA66AF("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x8BDE5BE4E46BA35F() && !unk_0x51CFE20A158947F4())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x055A9BA923455525("ID2_21_G_Night"))
	{
		unk_0x5758688546B2B24B("ID2_21_G_Night");
	}
	unk_0x810C5D6462DD69E6();
}

