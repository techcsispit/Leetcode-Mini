def twosum(nums, target):
    for i in range(len(nums)):
        x = target - nums[i]

        if(x in nums and nums.index(x)!=i):
            return [i,nums.index(x)]