#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x89522B8E487D4EF9(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xB519E5386FBF69E5(uLocal_2, 1))
	{
		if (!unk_0xB519E5386FBF69E5(uLocal_2, 0))
		{
			if (unk_0xD51CFE69539DB6D8(uLocal_0))
			{
				if (unk_0xC45A34912542C4EB(uLocal_0, 0))
				{
					unk_0x20BB4B94CC6DDC9A(uLocal_0, 0, 1);
					unk_0x2878EC06B3F897A0(uLocal_0, 1);
					unk_0xD39141689169EF06(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xD51CFE69539DB6D8(uLocal_1))
					{
						unk_0x20BB4B94CC6DDC9A(uLocal_1, 0, 1);
						unk_0x2878EC06B3F897A0(uLocal_1, 1);
						unk_0xD39141689169EF06(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x9956FB0E4B50ECB8(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0xC45A34912542C4EB(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x9956FB0E4B50ECB8(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xD525F9D50CBB6A5D(uLocal_0))
				{
					unk_0x9956FB0E4B50ECB8(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xC1F2137782A816E9(&uLocal_0);
	unk_0x52B01BD1A77FF6DE(&uLocal_1);
	unk_0x52F20802944F8DCE();
}

