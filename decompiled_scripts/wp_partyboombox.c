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
	if (unk_0xB1A77D5C890711F9(joaat("wp_partyboombox")) > 1)
	{
		unk_0x2F798BA2098FDADE();
	}
	if (unk_0x4B4BD87E3D30C50D(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xD8AD97AB31334199())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x5C5157A539753532() >= 22 || unk_0x5C5157A539753532() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x4DEBC98223AC90EF("ID2_21_G_Night"))
				{
					unk_0x564E857358FF5719("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x3CFF38F5196B193E() && !unk_0xA153A26DF49EBCC0())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x4DEBC98223AC90EF("ID2_21_G_Night"))
	{
		unk_0xEE3240EAE773A95A("ID2_21_G_Night");
	}
	unk_0x2F798BA2098FDADE();
}

