import random
import math
import matplotlib.pyplot as plt
import numpy as np
def dist(x1,y1,x2,y2):
    return math.sqrt((x1-x2)**2 + (y1-y2)**2)

def dcp(x,y,centroid):
    t = 999999
    for i in centroid:
        d = dist(x,y,i[0],i[1])
        if(d < t):
            t = d
    return t

def dcp_for_cluster(x,y,centroid):
    no_of_clster = 8
    t = 999999
    for i in range(8):
    #     print ""
        # t=999999
        # print centroid[i][1]
        d = dist(x,y,centroid[i][0],centroid[i][1])
        if(d < t):
            # print "d = ", d, "t = ",t
            t = d
            # print t
            no_of_cluster = i
    return no_of_cluster

def cluster(centroid,cord_dic,means8):
    # means8_tmp = [set(),set(),set(),set(),set(),set(),set(),set()]
    for x in cord_dic.keys():
        no_of_cluster = 8
        index = dcp_for_cluster(x,cord_dic[x],centroid)
        # print "no of cluster: ",index
        means8[index].add(x)
    return 0

def kcenter(cord_dic):
    f = open("/Users/xxhan/Documents/datamine/cluster/data.txt", "r")
    # cord_dic = {}
    while 1:
        line = f.readline()
        if not line:
            f.close()
            print "close"
            break
        pass
        # line = line.replace(" ","")
        line = line.replace("\n","")
        cord = line.split("    ")
        # print cord[1],cord[2]
        cord_dic[int(cord[1])] = int(cord[2])

    # print cord_dic
    centroid = []
    # centroid.append()
    a = random.sample(cord_dic.keys(), 1)
    # print a[0], cord_dic[a[0]]
    centroid.append([a[0], cord_dic[a[0]]])

    for i in range(7):  #len(centroid) == i+1
        maxdist = 0
        maxx = 0
        maxy = 0
        print i
        for j in cord_dic.keys():
            # print j,cord_dic[j],centroid
            # nonsense = 8
            d = dcp(j,cord_dic[j],centroid)
            # print d
            if(d > maxdist):
                maxdist = d
                maxx = j
                maxy = cord_dic[j]
                # print maxdist,maxx,maxy
        centroid.append([maxx, maxy])
    return centroid

def geo_f(geo_centroid,means8):
    for i in range(8):
        len_set = len(means8[i])
        sumx = 0
        sumy = 0
        for item in means8[i]:
            sumx += item
            sumy += cord_dict[item]
        # print i,sumx,sumy
        geo_centroid.append([int(sumx*1.0/len_set), int(sumy*1.0/len_set)])
    return 0 

cord_dict = {}
means8 = [set(),set(),set(),set(),set(),set(),set(),set()]
centroid = kcenter(cord_dict)

print "centroid:",centroid
cluster(centroid,cord_dict,means8)
print means8
geo_centroid = []
geo_f(geo_centroid,means8)
print geo_centroid

counter = 0
while(True):
    print counter
    means8 = [set(),set(),set(),set(),set(),set(),set(),set()]
    geo_centroid_t = []
    cluster(geo_centroid,cord_dict,means8)
    # print means8
    geo_f(geo_centroid_t,means8)
    print "geo_centroid_t", geo_centroid_t
    print "geo_centroid", geo_centroid
    print geo_centroid_t == geo_centroid
    if(geo_centroid_t != geo_centroid):
        geo_centroid = geo_centroid_t
        counter += 1
    else:
        break
# 
print geo_centroid
print means8[0]
print means8[1]
print means8[2]
print means8[3]
print means8[4]
print means8[5]
print means8[6]
print means8[7]
colors = ['b', 'c', 'g', 'k', 'm', 'r', 'khaki', 'y','lavender','paleturquoise']
for i in range(8):
    data1 = []
    for item in means8[i]:
        data1.append([item,cord_dict[item]])
    data1 = np.array(data1)
    print data1
    plt.scatter(data1[:, 0], data1[:, 1], c=colors[i])
plt.show()

        
        

