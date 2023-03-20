#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xC11469DCA6FC3BB5(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x4ED6CFDFE8D4131A(uLocal_2, 1))
	{
		if (!unk_0x4ED6CFDFE8D4131A(uLocal_2, 0))
		{
			if (unk_0xD42BD6EB2E0F1677(uLocal_0))
			{
				if (unk_0xB86D29B10F627379(uLocal_0, 0))
				{
					unk_0xDC19C288082E586E(uLocal_0, 0, 1);
					unk_0x7D9EFB7AD6B19754(uLocal_0, 1);
					unk_0xDC29BD42790C927D(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xD42BD6EB2E0F1677(uLocal_1))
					{
						unk_0xDC19C288082E586E(uLocal_1, 0, 1);
						unk_0x7D9EFB7AD6B19754(uLocal_1, 1);
						unk_0xDC29BD42790C927D(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xF73FBE4845C43B5B(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xB86D29B10F627379(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), unk_0xA86D5F069399F44D(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xF73FBE4845C43B5B(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x613C15D5D8DB781F(uLocal_0))
				{
					unk_0xF73FBE4845C43B5B(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xF73FBE4845C43B5B(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x6C9B2BE03BBD5C98(&uLocal_0);
	unk_0x4971D2F8162B9674(&uLocal_1);
	unk_0x5E8B6D17FF91CD59();
}

